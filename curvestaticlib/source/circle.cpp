#include "circle.h"
#include <iostream>

Circle::Circle(int x, int y, int z, unsigned int radius) : Curve(x, y, z, radius) {

}

void Circle::getFirstDerivative() const {
	std::cout << "circle first derivative\n";
}
