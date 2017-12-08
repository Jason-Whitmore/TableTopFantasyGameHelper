#include "Main.h"
#include "Entity.h"
#include "Entity.cpp"
#include <iostream>
#include "Junk.cpp"

using namespace std;





int main() {
	//Entity e = Entity(10, 10);
	//Junk j = Junk(3);
	
	cout << "Hello World! \n";
	
	std::string answer;

	srand(time(NULL));
	cout << rand() % 100 << "\n";
	cout << rand() % 100 << "\n";
	cout << rand() % 100 << "\n";

	//cout << j.toString();
	cin >> answer;

	return 0;
}