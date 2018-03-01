#pragma once
class Car
{
public:
	Car();
	~Car();
	int getY();
	int getX();
	void setY(int newY);
	void setX(int newX);
	bool isOnJourney;
private:
	int x;
	int y;
};

