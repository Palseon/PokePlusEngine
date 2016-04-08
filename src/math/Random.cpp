#include "Random.h"

int ppe_math::GetRandomInt(int lowest, int highest) {
	std::random_device seed;
	std::mt19937 gen(seed());
	std::uniform_int_distribution<int> dist(lowest, highest);

	return dist(gen);
}