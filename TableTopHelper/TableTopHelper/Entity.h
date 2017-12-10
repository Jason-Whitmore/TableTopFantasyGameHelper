#pragma once

#include <string>;

class Entity {
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
		std::string possibleNamesStart[5] = { "Human ","Troll ","Elven ","Orcish ","Dwarven " };
		std::string possibleNamesEnd[5] = { "Bandit","Marauder","Outlaw","Deserter","Brigand" };

		//std::vector<Item>::value_type junk = vector();

	public:
		Entity(int lev, int val);

		std::string toString();

		void refreshEntityValues();


};


