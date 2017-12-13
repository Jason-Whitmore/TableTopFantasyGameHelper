#include "Junk.h"
#include "Weapon.h"
#include "Entity.h"
#include "Main.h"
#include <iostream>
#include "Clothing.h"
#include <time.h>
#include <stdlib.h>



using namespace std;




int main() {
	
	srand(time(NULL));


	std::string input;
	int inputInt2;

	int inputInt;
	while (true) {
		cout << "Commands: junk, weapons, clothing, enemies, dice, attrib \n";
		cin >> input;
		system("CLS");

		if (input == "junk") {
			cout << "Level? \n";
			cin >> input;
			inputInt = stoi(input);
			Main::printOutJunk(inputInt);
		} else if (input == "weapons") {
			cout << "Level of weapons? \n";
			cin >> input;
			
			inputInt = stoi(input);

			cout << "Number of weapons? \n";
			cin >> input;


			Main::printOutWeapons(inputInt, stoi(input));
		} else if(input == "clothing"){
			cout << "Level of clothing? \n";
			cin >> input;
			inputInt = stoi(input);

			cout << "Number of clothes? \n";
			cin >> input;

			Main::printOutClothing(inputInt, stoi(input));
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

		} else if (input == "attrib") {
			Entity e = Entity(1,1);

			cout << "Strength? \n";
			cin >> input;
			e.setStrength(stoi(input));

			cout << "Agility? \n";
			cin >> input;
			e.setAgility(stoi(input));

			cout << "Intellect? \n";
			cin >> input;
			e.setIntellect(stoi(input));

			cout << "Luck? \n";
			cin >> input;
			e.setLuck(stoi(input));

			system("CLS");

			cout << "Health: " + std::to_string(e.getHealth()) + "\n";
			cout << "Health Regen: " + std::to_string(e.getHealthRegen()) + "\n";
			cout << "Mana: " + std::to_string(e.getMana()) + "\n";
			cout << "Mana Regen: " + std::to_string(e.getManaRegen()) + "\n";
			cout << "Carry Capacity: " + std::to_string(e.getCarryCapacity()) + "\n";
			cout << "Action Points: " + std::to_string(e.getActionPoints()) + "\n";
			cout << "\n";

			

		} else {
			cout << "Input unrecognized. Try again. \n";
		}

	}

	exit(0);
	return 0;
}

void Main::printOutJunk(int level){
	vector<Junk> j;

	Junk jun = Junk(10);
	int valLeft = level * 15;

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

void Main::printOutWeapons(int level, int amount){
	vector<Weapon> w;
	

	for (int i = 0; i < amount; i++) {
		w.push_back(Weapon(level));
	}

	//print out weapons
	for (int i = 0; i < w.size(); i++) {
		cout << w.at(i).toString() + "\n";
	}

	cout << "\n";

}

void Main::printOutClothing(int level, int amount){
	vector<Clothing> c;

	for (int i = 0; i < amount; i++) {
		c.push_back(Clothing(level));
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

void Main::printOutAtrributes(int s, int a, int i, int l)
{
}
