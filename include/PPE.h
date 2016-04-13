#ifndef __PPE__
#define __PPE__

#include "../include/core/Pokemon.h"
#include "../include/core/PokemonManager.h"


namespace ppe {

	class PPE {
	public:
		PPE();
		~PPE();

		inline ppe::management::PokemonManager* getPokemonManager() { return pkmanager; }

	private:
		ppe::management::PokemonManager *pkmanager;

	};

}

#endif
