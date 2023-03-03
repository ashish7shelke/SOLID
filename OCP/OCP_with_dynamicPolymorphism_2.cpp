#include <iostream>
#include <memory>
/* OCP Compliant Code
* Basic OCP approach
* Dynamic polymorphism
*/

//Service code
class base
{
public:
	// Method that client calls, it defines some skelaton of behaviour
	// and expects subclass to implement certain method for itself
	void method()
	{	
		this->stepA();
		this->stepB();
		this->stepC();
	}
protected:
	// Required to implement in subclass as purely subclass
	virtual void stepA() = 0;
	
	// Hook Method - has default logic but subclass can override
	virtual void stepB()
	{
		std::cout << "Base::Step B Hook Method" << std::endl;
	}
	
	// Invariant Method - No virtual
	void stepC()
	{
		std::cout << "Base::Step C Invariant Method" << std::endl;
	}
};

class subclass1 : public base
{
protected:
	void stepA() override {
	std::cout << "Subclass1::Step A" << std::endl;
	}
	
};

class subclass2 : public base
{
protected:
	void stepA() override {
	std::cout << "Subclass2::Step A" << std::endl;
	}

	void stepB() override {
	std::cout << "Subclass2::Step B Hook Method overridden" << std::endl;
	}
		
};

int main()
{
	std::unique_ptr<base> b1 = std::make_unique<subclass1>();
	std::unique_ptr<base> b2 = std::make_unique<subclass2>();
	
	b1->method();
	
	std::cout << std::endl;
	
	b2->method();
	return 0;
}
