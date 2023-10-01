class ConcreteFlyweight : public Flyweight
{
public:
	int intrinsicState;

	void Operation(int extrinsicState);
};
