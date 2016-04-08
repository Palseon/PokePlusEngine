#ifndef __PPE_POKEMON__
#define __PPE_POKEMON__

namespace ppe_core {

struct PkState {
	int health_points,
		ph_atk,
		sp_atk,
		ph_def,
		sp_def;
};

class Pokemon {
public:
	Pokemon(char *name, int level);
	~Pokemon();

private:
	char *name;
	int level;
	PkState state;

};

}

#endif

