#include "Map.h"



Map::Map(int numCar)
{
	for (auto i = 0; i < numCar; i++) {
		Car* newCar = new Car;
		points.push_back(newCar);
	}
}


Map::~Map()
{
}

void Map::step(Journey* journeys, int currentStep) {
	int index = 0;
	while (journeys != NULL) {
		this->points[index]->step(journeys, currentStep);
		journeys = journeys->next();
		index++;
	}
}

void Map::startSim(Journey* journeys, int numSim) {
	for (int i = 0; i < numSim; i++) {
		step(journeys, i);
	}
}