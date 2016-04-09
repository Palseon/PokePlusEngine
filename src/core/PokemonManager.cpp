#include <iostream>
#include <fstream>

#include "../../include/core/PokemonManager.h"

using namespace ppe_core::management;

PokemonManager::PokemonManager() {
	pk_registry = new Pokemon[200];
}

PokemonManager::~PokemonManager() {
}

void PokemonManager::RegisterPokemons(char *file_path) {
	string data = new char[200];

	std::ifstream file(file_path);

	while (std::getline(file, data)) {
		std::cout << "New Pokemon: " << data << std::endl;
		Pokemon *pk = new Pokemon("Test", PkType::ICE);
		string name;
		string type;
		PkState state;

		file >> name >> type >> state.ph_atk >> state.ph_def >> state.sp_atk >> state.sp_def;

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
	string name;
	//PkType type;
	//PkState state;

	//line >> name >> type >> state.ph_atk >> state.ph_def >> state.sp_atk >> state.sp_def;

	return (pk);
}