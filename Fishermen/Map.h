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
	void step(Journey* journeys);

private:
	vector<Car*> points;
	
};

