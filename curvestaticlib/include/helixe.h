#ifndef HELIXE_H
#define HELIXE_H

#include "curve.h"

class Helixe : public Curve {
private:
	int step;

public:
	Helixe(int x, int y, int z, unsigned int radius, int step);

public:
	int getStep() const;
	void getFirstDerivative() const override;
};

#endif
