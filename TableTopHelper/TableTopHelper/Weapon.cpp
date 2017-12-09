#include "Item.cpp"




class Weapon : public Item {
	private:

		std::string condition[5] = {"Sharp ", "Rusty ", "Broken ", "Pristine ", "Used" };
		std::string origin[5] = {"Human ", "Orcish ", "Dwarven ","Elvish ", "Troll "};
		std::string design[5] = {"Dagger", "Sword", "Greatsword", "Dirk", "Broadsword"};

		int attackDamage;
		int APCost;
		double critMultiplier;


	public:

		Weapon(int approxVal) : Item(){
			std::string s = "";

			s += condition[rand() % 5];
			s += origin[rand() % 5];
			s += design[rand() % 5];
			
			setName(s);
			
			int v = approxVal + ((int)approxVal * .2);
			setValue(v);

			attackDamage = approxVal + (rand() % 10);

			APCost = approxVal / 10;


			double dec = (rand() % (approxVal / 2))/ 100.0;
			critMultiplier = 1 + dec;

			setWeight(approxVal / 5);
			
		};


		std::string toString() {
			std::string r = "";

			r += "Item name: " + getName() + "\n";
			r += "Value: " + std::to_string(getValue()) + "\n";
			r += "Weight: " + std::to_string(getWeight()) + "\n";
			r += "Damage: " + to_string(attackDamage) + "\n";
			r += "AP cost: " + to_string(APCost) + "\n";
			r += "Crit multiplier: " + to_string(critMultiplier) + "\n";
			r += "\n";


			return r;

		}
};