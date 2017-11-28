#pragma once
class Entity
{

private:
	//basics
	int level;
	int health;
	
	//character atributes
	int strength;
	int intellect;
	int agility;
	int luck;

	//other stuff
	int actionPoints;

	int healthRegen;

	int mana;
	int manaRegen;

public:
	Entity(int level, int value);

	void refreshEntityValues();
};



