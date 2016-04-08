#include "../../include/core/Pokemon.h"

using namespace ppe_core;

Pokemon::Pokemon(char *name, PkType type) {
	this->name = name;
	this->type = type;
}

Pokemon::~Pokemon() {
}