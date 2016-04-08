#ifndef __PPE_POKEMON__
#define __PPE_POKEMON__

namespace ppe_core {


	typedef enum {
		NORMAL, FIGHT, FLYING, POISON, GROUND, ROCK,
		BUG, GHOST, STEEL, FIRE, WATER, GRASS,
		ELECTRIC, PSYCHIC, ICE, DRAGON, DARK, FAIRY
	} PkType;

	typedef enum {
		HARDY, LONELY, BRAVE, ADAMANT, NAUGHTY,
		BOLD, DOCILE, RELAXED, IMPISH, LAX,
		TIMID, HASTY, SERIOUS, JOLLY, NAIVE,
		MODEST, MILD, QUIET, BASHFUL, RASH,
		CALM, GENTLE, SASSY, CAREFUL, QUIRKY
	} PkNature;

	typedef struct {
		int health_points,
			ph_atk,
			sp_atk,
			ph_def,
			sp_def;
	} PkState;

	class Pokemon {
	public:
		Pokemon(char *name, PkType type);
		~Pokemon();

	private:
		char *name;
		int level;
		PkState state;
		PkType type;
		PkNature nature;

	};

}

#endif

