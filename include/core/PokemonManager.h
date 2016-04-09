#ifndef __PPE_PKMANAGER__
#define __PPE_PKMANAGER__

#include <string>

#include "Pokemon.h"

using std::string;
using ppe_core::Pokemon;

namespace ppe_core { namespace management {

	class PokemonManager {
	public:
		PokemonManager();
		~PokemonManager();

		void RegisterPokemons(char *file_path);

	private:
		Pokemon *pk_registry;

		string ReadData(string file_path);
		Pokemon* ReadPokemon(string line);
	};

}}

#endif
