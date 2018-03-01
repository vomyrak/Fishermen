#pragma once
#include <vector>
using namespace std;

class Car
{
public:
	Car();
	~Car();
	bool isOnJourney;
	int x;
	int y;
	int currentJourney;
	int currentStep;
	vector<int> completedJourneys;
	int numOnTime;
	void completeJourney();
	void step(Journey* journey, int currentStep);
	void startJourney(Journey* journey);
	int calculateScore(int journeyScore, int bonus);
};

