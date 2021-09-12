#include "ellipse.h"
#include "curve.h"

#include <iostream>

Ellipse::Ellipse(int x, int y, int z, unsigned int radius, unsigned int secondRadius) : Curve(x, y, z, radius), secondRadius(secondRadius) {
};

unsigned int Ellipse::getSecondRadius() const {
	return secondRadius;
}

void Ellipse::getFirstDerivative() const {
	std::cout << "ellipse first defivative\n";
}
