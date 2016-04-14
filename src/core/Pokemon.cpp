#include "../../include/core/Pokemon.h"
#include "../../include/core/PokemonManager.h"
#include "../../include/math/Random.h"

using std::string;
using std::to_string;

using ppe::core::Pokemon;
using ppe::core::PkType;
using ppe::core::PkNature;

using ppe::management::PokemonManager;

using ppe_math::GetRandomInt;

Pokemon::Pokemon() {
	Pokemon::Pokemon("MISSINGNO", PkType::NORMAL, PkType::NONE);
}

Pokemon::Pokemon(string name, PkType type1, PkType type2) {
	this->name = name;
	this->type1 = type1;
	this->type2 = type2;
	//this->level = 0;
	//this->nature = (PkNature) GetRandomInt(0, 24);
}

Pokemon::Pokemon(Pokemon *orig) {
	this->name = orig->name;
	this->type1 = orig->type1;
	this->type2 = orig->type2;
	this->level = 0;
	this->nature = (PkNature) GetRandomInt(0, 24);
}

Pokemon::~Pokemon() {
}

string Pokemon::toString() {
	return ("Name: " + name + "|"
		+ "Type 1: " + (PokemonManager::ParseType(type1)) + "|"
		+ "Type 2: " + (PokemonManager::ParseType(type2)) + "|"
		+ "Nature: " + to_string(nature) + "|"
		+ "Health: " + to_string(stats.health_points) + "|"
		+ "Level: " + to_string(level) + "|"
		+ "Attack: " + to_string(stats.ph_atk) + "|"
		+ "Sp. Attack: " + to_string(stats.sp_atk) + "|"
		+ "Defense: " + to_string(stats.ph_def) + "|"
		+ "Sp. Defense: " + to_string(stats.sp_def) + "|"
		+ "Speed: " + to_string(stats.speed) + "|");
}