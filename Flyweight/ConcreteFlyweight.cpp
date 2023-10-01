#include "Stdafx.h"

void ConcreteFlyweight::Operation(int extrinsicState)
{
	if (this != nullptr) {
		intrinsicState = extrinsicState;
		std::cout << this->intrinsicState << std::endl;
		std::cout << extrinsicState << std::endl;
	}
}