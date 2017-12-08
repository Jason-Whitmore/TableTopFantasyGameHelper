#include "Item.h"
#include <string>

using namespace std;


class Item
{
private:
	int value;

	std::string name;

	int weight;



public:
	Item(int v, std::string n, int w){
		value = v;

		name = n;

		weight = w;
	};

	Item() {
		value = 0;
		name = "";
		weight = 0;
	}

	void setValue(int n) {
		value = n;
	}

	int getValue() {
		return value;
	}

	void setName(std::string n) {
		name = n;
	}

	std::string getName() {
		return name;
	}

	void setWeight(int w) {
		weight = w;
	}

	int getWeight() {
		return weight;
	}


	std::string toString() {
		std::string r = "";
		
		r += "Item name: " + name + "\n";
		r += "Value: " + std::to_string(value) + "\n";
		r += "Weight: " + std::to_string(weight) + "\n";

		return r;

	}

	
};






