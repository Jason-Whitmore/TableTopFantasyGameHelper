#include "Junk.h"
#include "Weapon.h"
#include "Entity.h"
#include "Main.h"
#include <iostream>
#include "Clothing.h"

#include <time.h>



using namespace std;




int main() {

	srand(time(NULL));

	std::string input;
	int inputInt2;

	int inputInt;
	while (true) {
		cout << "Commands: junk, weapons, clothing, enemies, dice \n";
		cin >> input;


		if (input == "junk") {
			cout << "Approx val of junk? \n";
			cin >> input;
			inputInt = stoi(input);
			Main::printOutJunk(inputInt);
		} else if (input == "weapons") {
			cout << "Approx val of weapons? \n";
			cin >> input;

			inputInt = stoi(input);
			Main::printOutWeapons(inputInt);
		} else if(input == "clothing"){
			cout << "Approx val of clothing? \n";
			cin >> input;
			inputInt = stoi(input);
			Main::printOutClothing(inputInt);
		} else if (input == "enemies") {
			cout << "Level of enemies? \n";
			cin >> input;
			inputInt = stoi(input);

			cout << "Number of enemies? \n";
			cin >> input;
			inputInt2 = stoi(input);
			
			Main::printOutEnemies(inputInt, inputInt2);

		} else if(input == "dice"){
			cout << "How many sides? \n";
			cin >> input;
			cout << "\n";

			cout << "Dice rolls a ";
			cout << 1 + rand() % (stoi(input));
			cout << "\n";

		} else {
			cout << "Input unrecognized. Try again. \n";
		}

	}

	exit(0);
	return 0;
}

void Main::printOutJunk(int val){
	vector<Junk> j;

	Junk jun = Junk(10);
	int valLeft = val;

	while(valLeft > 0) {
		jun = Junk(10);
		j.push_back(jun);
		valLeft -= jun.getValue();

	}

	//print out all that junk

	for(int i = 0; i < j.size(); i++) {
		cout << j.at(i).toString() + "\n";
	}

	cout << "\n";

}

void Main::printOutWeapons(int val){
	vector<Weapon> w;
	
	int numOfWeapons = 1 + rand() % 2;
	int valPerWeapon = val / numOfWeapons;

	int valLeft = val;

	while (valLeft > 0) {
		w.push_back(Weapon(valPerWeapon));

		valLeft -= valPerWeapon;

	}

	//print out weapons
	for (int i = 0; i < w.size(); i++) {
		cout << w.at(i).toString() + "\n";
	}

	cout << "\n";

}

void Main::printOutClothing(int val){
	vector<Clothing> c;

	int numOfClothing = 1 + rand() % 2;
	int valPerClothing = val / numOfClothing;

	int valLeft = val;

	while (valLeft > 0) {
		c.push_back(Clothing(valPerClothing));

		valLeft -= valPerClothing;

	}

	//print out weapons
	for (int i = 0; i < c.size(); i++) {
		cout << c.at(i).toString() + "\n";
	}

	cout << "\n";
}

void Main::printOutEnemies(int level, int amount){
	Entity e = Entity(level, 1);

	for (int i = 0; i < amount; i++) {
		e = Entity(level, 1);
		cout << e.toString() + "\n";

	}

	cout << "\n";
}
