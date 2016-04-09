#ifndef __PPE_POKEMON__
#define __PPE_POKEMON__

#include <string>

using std::string;

namespace ppe_core {


	typedef enum PkType {
		NORMAL, FIGHT, FLYING, POISON, GROUND, ROCK,
		BUG, GHOST, STEEL, FIRE, WATER, GRASS,
		ELECTRIC, PSYCHIC, ICE, DRAGON, DARK, FAIRY
	} PkType;

	typedef enum PkNature {
		HARDY, LONELY, BRAVE, ADAMANT, NAUGHTY,
		BOLD, DOCILE, RELAXED, IMPISH, LAX,
		TIMID, HASTY, SERIOUS, JOLLY, NAIVE,
		MODEST, MILD, QUIET, BASHFUL, RASH,
		CALM, GENTLE, SASSY, CAREFUL, QUIRKY
	} PkNature;

	typedef struct PkState {
		int health_points,
			ph_atk,
			sp_atk,
			ph_def,
			sp_def;
	} PkState;

	class Pokemon {
	public:
		Pokemon(string name, PkType type);
		~Pokemon();

	private:
		string name;
		int level;
		PkState state;
		PkType type;
		PkNature nature;

	};

}

#endif

