#include "Stdafx.h"

int main(int argc, char* argv[])
{

	int extrinsicState = 0;
	Flyweight* flyweight = nullptr;

	FlyweightFactory* factory = new FlyweightFactory();

	flyweight = factory->GetFlyweight("1");
	if (flyweight != nullptr) {
		flyweight->Operation(extrinsicState);
	}
	flyweight = factory->GetFlyweight("10");
	if (flyweight != nullptr) {
		flyweight->Operation(extrinsicState);
	}
	flyweight = new UnsharedConcreteFlyweight();
	if (flyweight != nullptr) {
		flyweight->Operation(extrinsicState);
	}
	return 0;
}