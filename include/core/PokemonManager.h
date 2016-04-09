#ifndef __PPE_PKMANAGER__
#define __PPE_PKMANAGER__

#include <iostream>
#include <fstream>
#include <string>

#include "Pokemon.h"

using std::ifstream;
using std::string;

using ppe_core::Pokemon;

namespace ppe_core { namespace management {

	class PokemonManager {
	public:
		PokemonManager();
		~PokemonManager();

		void RegisterPokemons(char *file_path);

	private:
		Pokemon **pk_registry;

	};

}}

#endif
