#include "Weapon.h"






		


		int attackDamage = 0;
		int APCost = 0;
		double critMultiplier = 0;
	

		
		

	Weapon::Weapon(int approxVal) : Item(){

		std::string condition[5] = { "Sharp ", "Rusty ", "Broken ", "Pristine ", "Used " };
		std::string origin[5] = { "Human ", "Orcish ", "Dwarven ","Elvish ", "Troll " };
		std::string design[5] = { "Dagger", "Sword", "Greatsword", "Dirk", "Broadsword" };

		int rand1 = rand() % 5;
		int rand2 = rand() % 5;
		int rand3 = rand() % 5;

		std::string s = condition[rand1];;
		
		s += origin[rand2];
		s += design[rand3];
		
		setName(s);

		int v = approxVal - ((int)approxVal * .2);

		v += rand() % (int)((approxVal * .2) * 2);

		setValue(v);

		attackDamage = (approxVal / 3) + (rand() % 10);

		APCost = approxVal / 8;


		double dec = (rand() % (approxVal / 2)) / 100.0;
		critMultiplier = 1 + dec;

		setWeight(approxVal / 5);

	}

	std::string Weapon::toString() {


			/*std::string getName();
			int getValue();
			int getWeight();*/

			std::string r = "";
			
			r += "Weapon name: " + getName() + "\n";
			r += "Value: " + std::to_string(getValue()) + "\n";
			r += "Weight: " + std::to_string(getWeight()) + "\n";
			r += "Damage: " + std::to_string(attackDamage) + "\n";
			r += "AP cost: " + std::to_string(APCost) + "\n";
			r += "Crit multiplier: " + std::to_string(critMultiplier) + "\n";
			r += "\n";


			return r;

	}