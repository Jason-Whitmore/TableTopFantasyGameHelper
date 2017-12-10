#include "Item.h"
#pragma once


class Junk : public Item {
	private:
		
		std::string junkPrefix[10];
		std::string junkMaterial[5];
		std::string junkPostfix[10];
	public:

		Junk(int maxVal);


};