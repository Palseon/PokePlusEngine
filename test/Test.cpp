#include <iostream>
#include "../src/math/Random.h"

using std::cout;
using std::endl;

int main() {
	cout << "Hello PPE!" << endl;

	for (int i = 0; i < 10; ++i) {
		cout << ppe_math::GetRandomInt(0, 50) << endl;
	}
}