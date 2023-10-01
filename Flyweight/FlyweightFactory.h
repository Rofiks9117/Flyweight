class FlyweightFactory 
{
public:
	FlyweightFactory();
	Flyweight* GetFlyweight(std::string key);
private:
	std::map<std::string, ConcreteFlyweight*> pool;
};
