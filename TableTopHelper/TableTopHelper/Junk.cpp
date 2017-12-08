#include "Junk.h"
#include "Item.cpp"
#include <string>
#include <random>
#include "Helper.cpp"
using namespace std;


class Junk : public Item {
	private:
		
		std::string junkPrefix[10] = {"Old ","Shining ","Rusty ","Broken ","Fragile ","Pristine ","Standard issue ","Tarnished ","Tattered ","Scratched "};
		std::string material[5] = {"wooden ","metal ", "ceramic ", "thatch ", "golden "};
		std::string junkPostfix[10] = {"spoon", "cup", "figure", "heirloom", "purse", "hammer", "toy", "timepiece", "brush", "box"};

	public:
		Junk(int maxVal) : Item(){
			//Sleep(1);


			std::string name = junkPrefix[Helper::randomInt(0, 10)];
			name += material[Helper::randomInt(0, 5)];
			name += junkPostfix[Helper::randomInt(0, 10)];
			
			/*std::random_device rd;
			std::mt19937 mt(rd());
			std::uniform_real_distribution<int> dist(1, maxVal);*/


			int value = Helper::randomInt(0,maxVal);

			int weight = Helper::randomInt(0, 10);

			setWeight(weight);
			setValue(value);
			setName(name);
		};
	
};

