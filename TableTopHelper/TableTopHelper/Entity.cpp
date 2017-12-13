#include "Entity.h"





Entity::Entity(int lev, int val){

	int r;
	int pointsToDistribute = lev - 1;
	level = lev;

	strength = 3;

	agility = 3;

	intellect = 3;

	luck = 3;


	while (pointsToDistribute > 0) {
		r = rand() % 4;

		if (r == 0) {
			setStrength(getStrength() + 1);
			pointsToDistribute--;
		} else if (r == 1) {
			setAgility(getAgility() + 1);
			pointsToDistribute--;
		} else if (r == 2) {
			setIntellect(getIntellect() + 1);
			pointsToDistribute--;
		} else {
			setLuck(getLuck() + 1);
			pointsToDistribute--;
		}
	}

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
	s += "Carry capacity: " + std::to_string(carryCapacity) + "\n";
	s += "\n";


	return s;
}

void Entity::refreshEntityValues(){
	//make sure values like actionPoints, health, healthRegen, mana, manaRegen

	actionPoints = agility * 4;

	health = strength * 10;

	healthRegen = (strength * 2) + (agility);

	mana = intellect * 8;

	manaRegen = (intellect * 2) + (strength);

	carryCapacity = strength * 5;
}

void Entity::setStrength(int v){
	strength = v;
}

void Entity::setIntellect(int v){
	intellect = v;
}

void Entity::setAgility(int v){
	agility = v;
}

void Entity::setLuck(int v){
	luck = v;
}

int Entity::getStrength(){
	return strength;
}

int Entity::getIntellect(){
	return intellect;
}

int Entity::getAgility(){
	return agility;
}

int Entity::getLuck(){
	return luck;
}

void Entity::setHealth(int v){
	health = v;
}

void Entity::setHealthRegen(int v){
	healthRegen = v;
}

void Entity::setMana(int v){
	mana = v;
}

void Entity::setManaRegen(int v){
	manaRegen = v;
}

void Entity::setActionPoints(int v){
	actionPoints = v;
}

void Entity::setCarryCapacity(int v){
	carryCapacity = v;
}

int Entity::getHealth(){
	return health;
}

int Entity::getHealthRegen(){
	return healthRegen;
}

int Entity::getMana(){
	return mana;
}

int Entity::getManaRegen(){
	return manaRegen;
}

int Entity::getActionPoints(){
	return actionPoints;
}

int Entity::getCarryCapacity(){
	return carryCapacity;
}
