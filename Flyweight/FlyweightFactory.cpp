#include "Stdafx.h"

FlyweightFactory::FlyweightFactory()
{
	pool.insert(std::pair<std::string, ConcreteFlyweight*>("1", new ConcreteFlyweight()));
	pool.insert(std::pair<std::string, ConcreteFlyweight*>("2", new ConcreteFlyweight()));
	pool.insert(std::pair<std::string, ConcreteFlyweight*>("3", new ConcreteFlyweight()));
}

Flyweight* FlyweightFactory::GetFlyweight(std::string key)
{
	auto item = pool.find(key);
	if (item != pool.end()) {
		std::cout << "Key exists: " << item->first << "\n"; 
		return item->second;

	}
	else {
		std::cout << "Key not exists" << "\n";
		return nullptr;
	}

}
