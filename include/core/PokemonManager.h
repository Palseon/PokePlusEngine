#ifndef __PPE_PKMANAGER__
#define __PPE_PKMANAGER__

#include "Pokemon.h"


namespace ppe { namespace management {

	class PokemonManager {
	public:
		PokemonManager();
		~PokemonManager();

		void RegisterPokemons(char *file_path);

		inline ppe::core::Pokemon** getPokemonRegistry() { return pk_registry; }
		inline ppe::core::Pokemon* getPokemonFromID(int id) { return pk_registry[id]; }

		inline int getPokemonCount() { return pk_count; }

	private:
		int pk_count;
		ppe::core::Pokemon **pk_registry;

		ppe::core::PkType ParseType(std::string type);

	};

} }

#endif
