#include "Entity.h"
#include <iostream>
#include <string>
#include <random>
#include <iostream>

using namespace std;
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

	std::string name;
	std::string possibleNamesStart[5] = {"Human ","Troll ","Elven ","Orcish ","Dwarven "};
	std::string possibleNamesEnd[5] = {"Bandit","Marauder","Outlaw","Deserter","Brigand"};

	//std::vector<Item>::value_type junk = vector();

public:
	Entity(int lev, int value){
		int r;
		int pointsToDistribute = 3 + (level * 2);
		level = lev;

		strength = 1 + rand() % lev / 10.0;

		agility = 1 + rand() % lev / 10.0;

		intellect = 1 + rand() % lev / 10.0;

		luck = 1 + rand() % lev / 10.0;

		name = possibleNamesStart[rand() % 5] + possibleNamesEnd[rand() % 5];



		refreshEntityValues();
	};

	void refreshEntityValues(){
		//make sure values like actionPoints, health, healthRegen, mana, manaRegen

		actionPoints = agility * 4;

		health = strength * 10;

		healthRegen = strength * 2;

		mana = intellect * 8;

		manaRegen = intellect * 4;
	};


	std::string toString(){
		std::string r = "";

		return r;

	};


};





