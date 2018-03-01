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

void Map::step(Journey* journeys) {
	int index = 0;
	while (journeys != NULL) {
		if (!points[index]->isOnJourney) {
			if ()
		}
	}
}