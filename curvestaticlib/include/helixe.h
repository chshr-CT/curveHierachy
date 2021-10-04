#ifndef HELIXE_H
#define HELIXE_H

#include "curve.h"
#include <cmath>

class Helixe : public Curve {
private:
	int step;

public:
	Helixe(double x, double y, double z, unsigned int radius, int step);

public:
	int getStep() const;
	Point getPoint(double t) const override;
	Vector getFirstDerivative(double t) const override;
};

#endif
