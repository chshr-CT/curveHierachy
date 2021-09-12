#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "curve.h"

class Ellipse : public Curve {
private:
	unsigned int secondRadius;

public:
	Ellipse(int x, int y, int z, unsigned int radius, unsigned int secondRadius);

public:
	unsigned int getSecondRadius() const;
	void getFirstDerivative() const override;
};

#endif
