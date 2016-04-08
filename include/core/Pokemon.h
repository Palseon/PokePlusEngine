#ifndef __PPE_POKEMON__
#define __PPE_POKEMON__

namespace ppe_core {

class Pokemon {
public:
	Pokemon(char *name, int level);
	~Pokemon();

private:
	char *name;
	int level;

};

}

#endif

