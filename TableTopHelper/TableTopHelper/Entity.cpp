#include "Entity.h"
#include <iostream>
#include <string>
#include <random>


Entity::Entity(int level, int value)
{

	int r;
	int pointsToDistribute = 3 + (level * 2);
	level = level;

	while (pointsToDistribute > 0) {

		r = rand() % 5;
		health = r + (level * 4);

		pointsToDistribute -= r;

		r = rand() % 5;
		strength = r + (level * 4);
	}


};


