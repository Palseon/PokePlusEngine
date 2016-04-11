#ifndef __PPE_CHARACTER__
#define __PPE_CHARACTER__

#include <string>

using std::string;

namespace ppe { namespace character {

	class Character {
	public:
		Character();
		~Character();

	private:
		string name;
		bool male;
		//TODO: BAG

	};

	

} }

#endif