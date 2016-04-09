#include "../include/PPE.h"

#include "../include/core/PokemonManager.h"

using ppe_core::management::PokemonManager;

PpeEngine::PpeEngine() {
	PokemonManager pkmanager;
	pkmanager.RegisterPokemons("resources/pokemon_data.ppe");
}

PpeEngine::~PpeEngine() {
}