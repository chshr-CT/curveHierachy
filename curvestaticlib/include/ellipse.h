#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "curve.h"
#include <cmath>

class Ellipse : public Curve {
private:
	unsigned int secondRadius;

public:
	Ellipse(double x, double y, double z, unsigned int radius, unsigned int secondRadius);

public:
	unsigned int getSecondRadius() const;
	Point getPoint(double t) const override;
	Vector getFirstDerivative(double t) const override;
};

#endif
