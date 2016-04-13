#ifndef __PPE_POKEMON__
#define __PPE_POKEMON__

#include <string>


namespace ppe { namespace core {

	typedef enum PkType {
		NONE,
		NORMAL, FIGHTING, FLYING, POISON, GROUND, ROCK,
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
		Pokemon(std::string name, PkType type1, PkType type2);
		Pokemon(Pokemon *orig);
		~Pokemon();

	private:
		std::string name;
		int level;
		ppe::core::PkStats stats;
		ppe::core::PkType type1, type2;
		ppe::core::PkNature nature;

	public:
		std::string toString();
		inline void setStats(PkStats stats) { this->stats = stats; }

	};

} }

#endif

