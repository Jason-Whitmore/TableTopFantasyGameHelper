#include <iostream>
#include <string>
#include <ctgmath>
#include "Helper.h"

#pragma once

class Item {
	private:


		int value;

		std::string name;

		int weight;


	public:
		Item(int v, std::string n, int w);

		Item();


		void setValue(int val);

		int getValue();



		void setName(std::string n);

		std::string getName();



		void setWeight(int w);

		int getWeight();

		std::string toString();
};
