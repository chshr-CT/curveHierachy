#ifndef CIRCLE_H
#define CIRCLE_H

#include "curve.h"
#include <cmath>

class Circle : public Curve {
public:
	Circle(double x, double y, double z, unsigned int radius);

	Point getPoint(double t) const override;
	Vector getFirstDerivative(double t) const override;
};

#endif
