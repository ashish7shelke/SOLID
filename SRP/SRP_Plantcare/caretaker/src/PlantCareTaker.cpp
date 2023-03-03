#include <iostream>
#include "../inc/PlantCareTaker.hpp"

namespace caretaker
{

void PlantCareTaker::pourWater()
{
	std::cout << "Pouring water to plant" << std::endl;
}

void PlantCareTaker::sprinkleWater()
{
	std::cout << "Sprinkling water to plant" << std::endl;
}

void PlantCareTaker::openWindowBlinds()
{
	if(!windowBlindsOpen)
	{
		windowBlindsOpen = true;
		std::cout << "Opened window blinds" << std::endl;		
	}
}

void PlantCareTaker::closeWindowBlinds()
{
	if(windowBlindsOpen)
	{
		windowBlindsOpen = false;
		std::cout << "Closed window blinds" << std::endl;		
	}
}

} // namespace caretaker
