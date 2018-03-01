#pragma once
#include <vector>
#include <list>
#include "Car.h"
using namespace std;

typedef int Journey;
class Map
{
public:
	Map(int carNum);
	~Map();
	void step(Journey* journeys, int currentStep);
	void startSim(Journey* journeys, int numSim);

private:
	vector<Car*> points;
	
};

