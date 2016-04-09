#ifndef __PPE_POKEMON__
#define __PPE_POKEMON__

#include <string>

using std::string;
using std::to_string;

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

	typedef struct PkStats {
		int health_points,
			ph_atk,
			sp_atk,
			ph_def,
			sp_def,
			speed;
	} PkStats;

	class Pokemon {
	public:
		Pokemon();
		Pokemon(string name, PkType type);
		~Pokemon();

	private:
		string name;
		int level;
		PkStats stats;
		PkType type;
		PkNature nature;

	public:
		string toString();
		inline void setStats(PkStats stats) { this->stats = stats; }

	};

}

#endif
