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

		int carryCapacity;

		std::string name;
		std::string possibleNamesStart[5] = { "Human ","Troll ","Elven ","Orcish ","Dwarven " };
		std::string possibleNamesEnd[5] = { "Bandit","Marauder","Outlaw","Deserter","Brigand" };

		//std::vector<Item>::value_type junk = vector();

	public:
		Entity(int lev, int val);

		std::string toString();

		void refreshEntityValues();

		//strength, intellect, agility, luck
		void setStrength(int v);
		void setIntellect(int v);
		void setAgility(int v);
		void setLuck(int v);

		int getStrength();
		int getIntellect();
		int getAgility();
		int getLuck();

		//health, healthRegen, Mana, manaregen, actionPoints, Carry capacity

		void setHealth(int v);
		void setHealthRegen(int v);
		void setMana(int v);
		void setManaRegen(int v);
		void setActionPoints(int v);
		void setCarryCapacity(int v);

		int getHealth();
		int getHealthRegen();
		int getMana();
		int getManaRegen();
		int getActionPoints();
		int getCarryCapacity();



};


