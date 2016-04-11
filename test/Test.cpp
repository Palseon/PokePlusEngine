#include <iostream>

#include "../include/PPE.h"

using std::cout;
using std::cin;
using std::endl;

using ppe::PPE;


int main() {

	cout << "Starting PPE!" << endl;
	PPE *engine = new PPE;
	cout << "PPE started." << endl;

	int count = engine->getPokemonManager()->getPokemonCount();

	cout << "Total Pokemon count: " << count << endl;


	int id;
	cout << "Enter Pokemon ID: ";
	cin >> id;

	while (id >= 0 && id < count) {
		cout << engine->getPokemonManager()->getPokemonFromID(id)->toString() << endl;
		
		cout << "Enter Pokemon ID: ";
		cin >> id;
	}

}