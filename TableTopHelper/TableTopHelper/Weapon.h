#include "Item.h"
#pragma once



class Weapon : public Item {
	private:

		


		int attackDamage;
		int APCost;
		double critMultiplier;

		std::string condition[5];
		std::string origin[5];
		std::string design[5];


	public:

		


		Weapon(int approxVal);

		std::string toString();
	
};

