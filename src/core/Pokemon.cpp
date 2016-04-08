#include "../../include/core/Pokemon.h"

using namespace ppe_core;

Pokemon::Pokemon(char *name, int level) {
	this->name = name;
	this->level = level;
}

Pokemon::~Pokemon() {
}