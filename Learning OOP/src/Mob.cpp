#include "Entity.cpp"

class Mob : public Entity {
public:
	Mob(double x, double y) {
		setX(x);
		setY(y);
	}
};
