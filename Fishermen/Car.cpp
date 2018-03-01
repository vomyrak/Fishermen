#include "Car.h"



Car::Car()
{
	this->x = 0;
	this->y = 0;
	this->isOnJourney = false;
	this->currentJourney = -1;
	this->numOnTime = 0;
	this->currentStep = 0;
}


Car::~Car()
{
}

void Car::completeJourney() {
	this->completedJourneys.push_back(this->currentJourney);
	this->currentJourney = -1;
}

void Car::step(Journey* journey, int currentStep) {
	int destX;
	int destY;
	if (!this->isOnJourney) {
		destX = journeys->startX;
		destY = journeys->startY;
		this->x += (destX - this->x);
		this->y += (destY - this->y);
		if (this->x == destX) {
			if (this->y == destY) {
				this->startJourney(journey);
			}
		}
	}
	else {
		destX = journeys->startX;
		destY = journeys->startY;
		this->x += (destX - this->x);
		this->y += (destY - this->y);
		if (this->x == destX) {
			if (this->y == destY) {
				this->completeJourney();
			}
		}
	}
	this->currentStep = currentStep;
}

void Car::startJourney(Journey* journey) {
	this->currentJourney = journey->current;
	this->isOnJourney = true;
	if (this->currentStep <= journey->startTime) {
		this->numOnTime += 1;
	}
}

int Car::calculateScore(int journeyScore, int bonus) {
	return journeyScore * completedJourneys.size() + bonus * numOnTime;
}