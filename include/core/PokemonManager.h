#ifndef __PPE_PKMANAGER__
#define __PPE_PKMANAGER__

#include <string>

#include "Pokemon.h"

using std::string;

using ppe::core::Pokemon;
using ppe::core::PkType;


namespace ppe { namespace management {

	class PokemonManager {
	public:
		PokemonManager();
		~PokemonManager();

		void RegisterPokemons(char *file_path);

		inline Pokemon** getPokemonRegistry() { return pk_registry; }
		inline Pokemon* getPokemonFromID(int id) { return pk_registry[id]; }

		inline int getPokemonCount() { return pk_count; }

	private:
		int pk_count;
		Pokemon **pk_registry;

		PkType ParseType(string type);

	};

} }

#endif
