#include "helixe.h"
#include "curve.h"

#include <iostream>

Helixe::Helixe(int x, int y, int z, unsigned int radius, int step) : Curve(x, y, z, radius), step(step) {
};

int Helixe::getStep() const {
	return step;
}

void Helixe::getFirstDerivative() const {
	std::cout << "helixe first derivative\n";
}
