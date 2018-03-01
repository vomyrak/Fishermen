#include "Car.h"



Car::Car()
{
	x = 0;
	y = 0;
	isOnJourney = false;
}


Car::~Car()
{
}

int Car::getX() {
	return x;
}

int Car::getY() {
	return y;
}

void Car::setX(int newX) {
	x = newX;
}

void Car::setY(int newY) {
	x = newY;
}