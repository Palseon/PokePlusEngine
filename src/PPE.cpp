#include <iostream>
#include "../include/PPE.h"

#include "../include/core/PokemonManager.h"

using ppe::PPE;
using ppe::management::PokemonManager;

PPE::PPE() {

	pkmanager = new PokemonManager;

	pkmanager->RegisterPokemons("resources/Kanto.ppe");
	std::cout << std::endl;

	pkmanager->RegisterPokemons("resources/Johto.ppe");
	std::cout << std::endl;

	pkmanager->RegisterPokemons("resources/Hoenn.ppe");
	std::cout << std::endl;

	pkmanager->RegisterPokemons("resources/Sinnoh.ppe");
	std::cout << std::endl;

	pkmanager->RegisterPokemons("resources/Teselia.ppe");
	std::cout << std::endl;

	pkmanager->RegisterPokemons("resources/Kalos.ppe");
	std::cout << std::endl;
	
}

PPE::~PPE() {
}