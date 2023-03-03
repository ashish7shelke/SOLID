#ifndef PLANTCARETAKER_HPP
#define PLANTCARETAKER_HPP

namespace caretaker
{
class PlantCareTaker
{
	bool windowBlindsOpen = true;
	
public:
	void pourWater();
	void sprinkleWater();
	
	void openWindowBlinds();
	void closeWindowBlinds();
};
} // namespace caretaker
#endif //PLANTCARETAKER_HPP

