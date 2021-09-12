#ifndef CIRCLE_H
#define CIRCLE_H

#include "curve.h"

class Circle : public Curve {
public:
	Circle(int x, int y, int z, unsigned int radius);

	void getFirstDerivative() const override;
};

#endif
