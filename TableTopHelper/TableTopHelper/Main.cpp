#include "Junk.cpp"
#include "Weapon.cpp"
#include "Main.h"
#include <iostream>

#include <time.h>
#include "Item.cpp"



using namespace std;




int main() {

	srand(time(NULL));


	//Entity e = Entity(10, 10);
	//Junk j = Junk(10);
	Weapon w = Weapon(40);
	
	cout << "Hello World! \n";
	
	std::string answer;

	


	//cout << w.toString();
	cin >> answer;
	exit(0);
	return 0;
}