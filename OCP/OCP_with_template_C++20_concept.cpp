#include <iostream>

/* OCP Compliant Code
* In C++20 we can use 'concept' to make the expected 
* interface more explicit, improve readability and debugging
*/

/*
	https://www.cppstories.com/2021/concepts-intro/
*/

template<typename T>
concept Flyable = requires(T t)
{
	t.fly();
};

template<typename T>
concept Swimable = requires(T t)
{
	t.swim();
};

template<Flyable T>
void action(const T &t)
{
	std::cout << "Lets fly \n";
};

template<Swimable T>
void action(const T &t)
{
	std::cout << "Lets swim \n";
};

class Bird {
public:
    void fly() const {
        std::cout << "Fly...\n";
    }
};

class Fish {
public:
    void swim() const {
        std::cout << "Swim...\n";
    }
};

int main()
{
	Bird bird;
	Fish fish;
	
	action(bird);
	action(fish);
	
	return 0;
}
