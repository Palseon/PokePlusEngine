#ifndef __PPE__
#define __PPE__

#include "../include/core/Pokemon.h"
#include "../include/core/PokemonManager.h"

using ppe::Pokemon;
using ppe::management::PokemonManager;

namespace ppe {

	class PPE {
	public:
		PPE();
		~PPE();

		inline PokemonManager* getPokemonManager() { return pkmanager; }

	private:
		PokemonManager *pkmanager;

	};

}

#endif
