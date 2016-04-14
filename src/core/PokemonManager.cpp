#include <iostream>
#include <string>
#include <fstream>

#include "../../include/core/PokemonManager.h"
#include "../../include/core/Pokemon.h"

using std::ifstream;
using std::string;

using ppe::core::Pokemon;
using ppe::core::PkType;
using ppe::core::PkStats;
using ppe::management::PokemonManager;


PokemonManager::PokemonManager() {
	pk_count = 0;
	pk_registry = new Pokemon*[800];
}

PokemonManager::~PokemonManager() {
	for (int i = 0; i < pk_count; i++) {
		delete pk_registry[i];
	}
	delete [] pk_registry;
}

void PokemonManager::RegisterPokemons(char *file_path) {
	string data;
	ifstream file(file_path);

	while (std::getline(file, data)) {

		string name;
		string type1, type2;
		PkStats stats;

		file >> name
			 >> type1
			 >> type2
			 >> stats.health_points
			 >> stats.ph_atk
			 >> stats.ph_def
			 >> stats.sp_atk
			 >> stats.sp_def
			 >> stats.speed;

		Pokemon *pk = new Pokemon(name, ParseString(type1), ParseString(type2));
		pk->setStats(stats);

		//std::cout << pk->toString() << std::endl;

		pk_registry[pk_count++] = pk;
		
	}
}

PkType PokemonManager::ParseString(string type) {
	if (type == "NONE") return PkType::NONE;
	if (type == "NORMAL") return PkType::NORMAL;
	if (type == "FIGHTING") return PkType::FIGHTING;
	if (type == "FLYING") return PkType::FLYING;
	if (type == "POISON") return PkType::POISON;
	if (type == "GROUND") return PkType::GROUND;
	if (type == "ROCK") return PkType::ROCK;
	if (type == "BUG") return PkType::BUG;
	if (type == "GHOST") return PkType::GHOST;
	if (type == "STEEL") return PkType::STEEL;
	if (type == "FIRE") return PkType::FIRE;
	if (type == "WATER") return PkType::WATER;
	if (type == "GRASS") return PkType::GRASS;
	if (type == "ELECTRIC") return PkType::ELECTRIC;
	if (type == "PSYCHIC") return PkType::PSYCHIC;
	if (type == "ICE") return PkType::ICE;
	if (type == "DRAGON") return PkType::DRAGON;
	if (type == "DARK") return PkType::DARK;
	if (type == "FAIRY") return PkType::FAIRY;
}

string PokemonManager::ParseType(PkType type) {
	if (type == PkType::NONE) return "NONE";
	if (type == PkType::NORMAL) return "NORMAL";
	if (type == PkType::FIGHTING) return "FIGHTING";
	if (type == PkType::FLYING) return "FLYING";
	if (type == PkType::POISON) return "POISON";
	if (type == PkType::GROUND) return "GROUND";
	if (type == PkType::ROCK) return "ROCK";
	if (type == PkType::BUG) return "BUG";
	if (type == PkType::GHOST) return "GHOST";
	if (type == PkType::STEEL) return "STEEL";
	if (type == PkType::FIRE) return "FIRE";
	if (type == PkType::WATER) return "WATER";
	if (type == PkType::GRASS) return "GRASS";
	if (type == PkType::ELECTRIC) return "ELECTRIC";
	if (type == PkType::PSYCHIC) return "PSYCHIC";
	if (type == PkType::ICE) return "ICE";
	if (type == PkType::DRAGON) return "DRAGON";
	if (type == PkType::DARK) return "DARK";
	if (type == PkType::FAIRY) return "FAIRY";
}