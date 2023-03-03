#ifndef MOISTURESENSOR_HPP
#define MOISTURESENSOR_HPP

#include <chrono>
#include <mutex>
#include <set>

#include "../../caretaker/inc/PlantCareTaker.hpp"

namespace sensors
{
class MoistureSensor {
	    const std::chrono::seconds sleepTime;
	    std::mutex& mtx;
	    std::set<caretaker::PlantCareTaker*> caretakers;

	    const int min = 0;
	    const int max = 10;
	    const int threshold = 3;

public:
	    MoistureSensor(const std::chrono::seconds, std::mutex& mtx);
	    void subscribe(caretaker::PlantCareTaker&);
	    void operator()();

private:
	    bool isAirTooDry();
	    bool isSoilTooDry();
	    int getAirMoisture();
	    int getSoilMoisture();
};
} // namespace sensors
#endif //MOISTURESENSOR_HPP

