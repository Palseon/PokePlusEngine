#include <iostream>
#include "../include/PPE.h"

#include "../include/core/PokemonManager.h"

using ppe_core::management::PokemonManager;

PpeEngine::PpeEngine() {
	PokemonManager pkmanager;
	//pkmanager.RegisterPokemons("resources/pokemon_data.ppe");

	pkmanager.RegisterPokemons("resources/Kanto.ppe");
	std::cout << std::endl;

	pkmanager.RegisterPokemons("resources/Johto.ppe");
	std::cout << std::endl;

	pkmanager.RegisterPokemons("resources/Hoenn.ppe");
	std::cout << std::endl;

	pkmanager.RegisterPokemons("resources/Teselia.ppe");
	std::cout << std::endl;

	pkmanager.RegisterPokemons("resources/Kalos.ppe");
	std::cout << std::endl;
	
}

PpeEngine::~PpeEngine() {
}