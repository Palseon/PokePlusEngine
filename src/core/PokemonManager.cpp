#include <iostream>
#include <fstream>

#include "../../include/core/PokemonManager.h"

using namespace ppe_core::management;

PokemonManager::PokemonManager() {
}

PokemonManager::~PokemonManager() {
}

void PokemonManager::RegisterPokemons(char *file_path) {
	string data = ReadData(file_path);
	
	int lines = 1;

	for (int i = 0; i < lines; ++i) {

	}
}

string PokemonManager::ReadData(string file_path) {
	string data = new char[200];
	
	std::ifstream file(file_path);
	
	while (std::getline(file, data)) {
		std::cout << "New Pokemon: " << data << std::endl;
	}

	return (data);
}

Pokemon* PokemonManager::ReadPokemon(string line) {
	Pokemon *pk = new Pokemon("Test", PkType::ICE);

	return (pk);
}