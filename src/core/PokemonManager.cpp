#include "../../include/core/PokemonManager.h"
#include "../../include/core/Pokemon.h"

using namespace ppe_core::management;
using ppe_core::PkType;

PokemonManager::PokemonManager() {
	pk_count = 0;
	pk_registry = new Pokemon*[800];
}

PokemonManager::~PokemonManager() {
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

		Pokemon *pk = new Pokemon(name, ParseType(type1), ParseType(type2));
		pk->setStats(stats);

		std::cout << pk->toString() << std::endl;

		pk_registry[pk_count++] = pk;
		
	}
}

PkType ppe_core::management::PokemonManager::ParseType(string type) {
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