#pragma once
#include "Item.h"
class Clothing : public Item{
	private:
	std::string condition[5] = {"Pristine ","Tattered ","Ugly ", "Well worn ", "Discolored "};
	std::string material[5] = {"Leather ","Chain Mail ","Cloth ","Fur ","Wool "};
	std::string type[4] = {"Bracelet","Shirt ","Greaves ","Helmet"};

	bool hasEffect;

	int effectAmount;
	std::string effectType[4] = {"Strength", "Luck", "Intellect", "Agility"};

	public:

		Clothing(int approxVal);

		std::string toString();

};

