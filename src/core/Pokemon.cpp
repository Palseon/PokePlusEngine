#include "../../include/core/Pokemon.h"

using namespace ppe_core;

Pokemon::Pokemon() {
	Pokemon::Pokemon("MISSINGNO", PkType::NORMAL);
}

Pokemon::Pokemon(string name, PkType type) {
	this->name = name;
	this->type = type;
}

Pokemon::~Pokemon() {
}