#include "Clothing.h"

Clothing::Clothing(int approxVal){
	std::string n = "";

	int ran1 = rand() % 5;
	int ran2 = rand() % 5;
	int ran3 = rand() % 4;



	n += condition[ran1];
	n += material[ran2];
	n += type[ran3];

	setName(n);

	int v = (int)((approxVal * .8) + (approxVal * (1 + ((rand() % 30)/100.0))));

	setValue(v);


	int w = (int)   (v * (1 + ((rand() % 30) / 100.0)));
	setWeight(w);

	//give a bit of 20% chance of a buff

	int c = rand() % 2;
	hasEffect = false;


	if (c == 1 && approxVal >= 17) {
		//include buff
		hasEffect = true;
		effectAmount = v / 17;
	}





}



std::string Clothing::toString()
{
	std::string s = "";
	s += "Name: " + getName() + "\n";
	s += "Weight: " + std::to_string(getWeight()) + "\n";
	s += "Value: " + std::to_string(getValue()) + "\n";
	s += "\n";
	int n = rand() % 4;
	if (hasEffect) {
		s += "Bonus Effect: +" + std::to_string(effectAmount) + " " + effectType[n] + "\n";
	}

	return s;

}
