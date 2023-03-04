#include <iostream>
#include <memory>
#include <vector>

/* OCP Compliant Code
* Basic OCP approach
* Use template for extending functionality
*/

//Service code
class Triangle
{
public:
	void draw() const
	{
		std::cout << " Triangle " << std::endl;
	}
};

class Square
{
public:
	void draw() const
	{
		std::cout << " Sqaure " << std::endl;
	}
};

template<typename T>
concept Geometry = requires(T t)
{
	t.draw();
};

/*
 * The run-time concept idiom can be useful for OCP.
 * It allows unmodified concrete types to behave in run-time polymorphic manner
 * It erases types using templates and dynamic polymorphism and has 3 layers:
 * wrapper, concept, model. For example, std::function and std::any use similar approach.
 * 
 * We may depend on a wrapper type, which can take and wrap any types that confirm
 * to some interface (something like compile time concepts in C++20). 
 */
  
class Wrapper
{
public:
	template <Geometry T>
	Wrapper(T&& geometry) : ptr(std::make_unique<Model<T>> (std::forward<T>(geometry))){}
	
	void draw() const {ptr->draw(); }
	
private:

	class Concept {
	public:
		virtual ~Concept() = default;
		virtual void draw() const = 0;
	};
	
	template <Geometry T>
	class Model: public Concept
	{
	public:
		Model(T&& geometry): m_geometry(std::move(geometry)){}

		void draw() const override
		{
			std::cout << "Logic Extended: ";
			m_geometry.draw(); 
		}
		
	private:
		T m_geometry;
	};	
	
	std::unique_ptr<Concept> ptr;
};

// Client Code
void sketch(const std::vector<Wrapper>& vec)
{
	for(const auto& e : vec)
	{
		std::cout << "Object:: ";
		e.draw();
	}
}

int main()
{
	std::vector<Wrapper> vec;
	
    // We can now push to vector an instance of any Geometry type - 
    // class that has draw method.
    // We do not need to inherit from such types but we can extend the logic
    // inside the wrapper without modifying those types or the sketch function above.	

	vec.emplace_back(Wrapper(Triangle()));
	vec.emplace_back(Wrapper(Square()));
	
	sketch(vec);
			
	return 0;
}
