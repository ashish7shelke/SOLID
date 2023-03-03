#include <iostream>

/* OCP Compliant Code
* Basic OCP approach
* Depneds on abstraction
* Used polymorphism and inheritance
*/

//Service code
class geometryObject
{
public:
	virtual ~geometryObject() = default;
	virtual void draw() const = 0;
};

class triangle : public geometryObject
{
public:
	void draw() const override
	{
		std::cout << " Triangle " << std::endl;
	}
};

class square : public geometryObject
{
public:
	void draw() const override
	{
		std::cout << " Sqaure " << std::endl;
	}
};

// Client Code
void draw(const geometryObject& object)
{
	std::cout << "I'm Drawing " ;
	object.draw();
}

int main()
{
	triangle 	triObj;
	square 		sqrObj;
	
	draw(triObj);
	draw(sqrObj);
	
	return 0;
}
