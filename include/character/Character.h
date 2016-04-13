#ifndef __PPE_CHARACTER__
#define __PPE_CHARACTER__

#include <string>


namespace ppe { namespace character {

	class Character {
	public:
		Character();
		~Character();

	private:
		std::string name;
		bool male;
		//TODO: BAG

	};

	

} }

#endif