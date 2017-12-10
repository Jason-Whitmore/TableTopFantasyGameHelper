#include "Item.h"
#include <string>



		int value;

		std::string name;

		int weight;

	
		Item::Item(int v, std::string n, int w){
			value = v;

			name = n;

			weight = w;
		};

		Item::Item() {
			value = 0;
			name = "f";
			weight = 0;
		}

		void Item::setValue(int val){
			value = val;
		}

		int Item::getValue(){
			return value;
		}

		void Item::setName(std::string n){
			name = n;
		}

		std::string Item::getName(){
			return name;
		}

		void Item::setWeight(int w){
			weight = w;
		}

		int Item::getWeight(){
			return weight;
		}






		std::string Item::toString() {
			std::string r = "";
		
			r += "Item name: " + name + "\n";
			r += "Value: " + std::to_string(value) + "\n";
			r += "Weight: " + std::to_string(weight) + "\n";

			return r;

		}







