#include "Item.cpp"




class Junk : public Item {
	private:
		
		string junkPrefix[10] = {"Old ","Shining ","Rusty ","Broken ","Fragile ","Pristine ","Standard issue ","Tarnished ","Tattered ","Scratched "};
		string material[5] = {"wooden ","metal ", "ceramic ", "thatch ", "golden "};
		string junkPostfix[10] = {"spoon", "cup", "figure", "heirloom", "purse", "hammer", "toy", "timepiece", "brush", "box"};

	public:
		Junk(int maxVal) : Item(){
			//Sleep(1);
			
			int randIndex1 = rand() % 10;
			int randIndex2 = rand() % 5;
			int randIndex3 = rand() % 10;

			std::string name = junkPrefix[randIndex1];
			name += material[randIndex2];
			name += junkPostfix[randIndex3];
			
			/*std::random_device rd;
			std::mt19937 mt(rd());
			std::uniform_real_distribution<int> dist(1, maxVal);*/


			int value = rand() % maxVal;

			int weight =  1 + (rand() % 3);

			setWeight(weight);
			setValue(value);
			setName(name);
		};
	
};

