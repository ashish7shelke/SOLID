#include <iostream>

/* OCP Compliant Code
* Basic OCP approach
* Use template for extending functionality
*/

//Service code
class triangle
{
public:
	void draw() const
	{
		std::cout << " Triangle " << std::endl;
	}
};

class square
{
public:
	void draw() const
	{
		std::cout << " Sqaure " << std::endl;
	}
};

// Client Code
template<typename geometryObject>
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
