class UnsharedConcreteFlyweight : public Flyweight
{
public:
	int allState;

	void Operation(int extrinsicState);
};
