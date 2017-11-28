#include "Entity.h"
#include <iostream>
#include <string>
#include <random>


Entity::Entity(int lev, int value){

	int r;
	int pointsToDistribute = 3 + (level * 2);
	level = lev;

	strength = 1 + rand() % lev / 10.0;

	agility = 1 + rand() % lev / 10.0;

	intellect = 1 + rand() % lev / 10.0;

	luck = 1 + rand() % lev / 10.0;

	refreshEntityValues();
}
void Entity::refreshEntityValues(){
	//make sure values like actionPoints, health, healthRegen, mana, manaRegen

	actionPoints = agility * 4;

	health = strength * 10;

	healthRegen = strength * 2;

	mana = intellect * 8;

	manaRegen = intellect * 4;

}
;


