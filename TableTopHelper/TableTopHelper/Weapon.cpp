#include "Weapon.h"






		


		int attackDamage = 0;
		int APCost = 0;
		double critMultiplier = 0;
	

		
		

	Weapon::Weapon(int level) : Item(){

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

		double min = (level * 10) * .8;

		double max = (level * 10) * 1.2;

		double randomDouble(double min, double max);

		setValue(Helper::randomDouble(min, max));

		attackDamage = 5 * log(Helper::randomDouble(3, 4) * level);

		APCost = 4 * log(Helper::randomDouble(2, 4) * level);

		critMultiplier = Helper::randomDouble(1, 1 + (level / 15.0));


		setWeight(3 * log(Helper::randomDouble(2,3) * level));

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