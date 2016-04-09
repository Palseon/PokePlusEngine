#include "../../include/core/Pokemon.h"
#include "../../include/math/Random.h"

using namespace ppe_core;
using ppe_math::GetRandomInt;

Pokemon::Pokemon() {
	Pokemon::Pokemon("MISSINGNO", PkType::NORMAL);
}

Pokemon::Pokemon(string name, PkType type) {
	this->name = name;
	this->type = type;
	this->level = 0;
	this->nature = (PkNature) GetRandomInt(0, 24);
}

Pokemon::~Pokemon() {
}

string Pokemon::toString() {
	return ("Name: " + name + "\n"
		+ "Type: " + to_string(static_cast<int>(GRASS)) + "\n"
		+ "Nature: " + to_string((PkNature) nature) + "\n"
		+ "Health: " + to_string(stats.health_points) + "\n"
		+ "Level: " + to_string(level) + "\n"
		+ "Attack: " + to_string(stats.ph_atk) + "\n"
		+ "Sp. Attack: " + to_string(stats.sp_atk) + "\n"
		+ "Defense: " + to_string(stats.ph_def) + "\n"
		+ "Sp. Defense: " + to_string(stats.sp_def) + "\n"
		+ "Speed: " + to_string(stats.speed) + "\n");
}