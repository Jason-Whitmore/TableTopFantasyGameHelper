#include "Entity.h"





Entity::Entity(int lev, int val){

	int r;
	int pointsToDistribute = 3 + (level * 1);
	level = lev;

	strength = 1 + rand() % lev;

	agility = 1 + rand() % lev;

	intellect = 1 + rand() % lev;

	luck = 1 + rand() % lev;

	name = possibleNamesStart[rand() % 5] + possibleNamesEnd[rand() % 5];



	refreshEntityValues();

}

std::string Entity::toString()
{
	std::string s = "";

	s += "Name: " + name + "\n";
	s += "Level: " + std::to_string(level) + "\n";
	s += "Health: " + std::to_string(health) + "\n";
	s += "\n";
	s += "Strength: " + std::to_string(strength) + "\n";
	s += "Intellect: " + std::to_string(intellect) + "\n";
	s += "Agility: " + std::to_string(agility) + "\n";
	s += "Luck: " + std::to_string(luck) + "\n";
	s += "\n";
	s += "Action Points: " + std::to_string(actionPoints) + "\n";
	s += "Health Regen: " + std::to_string(healthRegen) + "\n";
	s += "Mana: " + std::to_string(mana) + "\n";
	s += "Mana Regen: " + std::to_string(manaRegen) + "\n";
	s += "\n";


	return s;
}

void Entity::refreshEntityValues(){
	//make sure values like actionPoints, health, healthRegen, mana, manaRegen

	actionPoints = agility * 4;

	health = strength * 10;

	healthRegen = strength * 2;

	mana = intellect * 8;

	manaRegen = intellect * 2;
}
