#include "../../include/core/PokemonManager.h"

using namespace ppe_core::management;

PokemonManager::PokemonManager() {
	pk_registry = new Pokemon*[200];
}

PokemonManager::~PokemonManager() {
}

void PokemonManager::RegisterPokemons(char *file_path) {
	string data;
	ifstream file(file_path);
	int count = 0;

	while (std::getline(file, data)) {

		string name;
		int type;
		PkStats stats;

		file >> name
			 >> type
			 >> stats.health_points
			 >> stats.ph_atk
			 >> stats.ph_def
			 >> stats.sp_atk
			 >> stats.sp_def
			 >> stats.speed;

		Pokemon *pk = new Pokemon(name, (PkType) type);
		pk->setStats(stats);

		std::cout << pk->toString() << std::endl;

		pk_registry[count] = pk;
		
	}
}