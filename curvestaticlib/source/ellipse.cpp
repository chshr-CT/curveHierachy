#include "ellipse.h"

Ellipse::Ellipse(double x, double y, double z, unsigned int radius, unsigned int secondRadius) : Curve(x, y, z, radius), secondRadius(secondRadius) {
};

unsigned int Ellipse::getSecondRadius() const {
	return secondRadius;
}

Curve::Point Ellipse::getPoint(double t) const {
	return Curve::Point(radius * cos(t) + point.x, secondRadius * sin(t) + point.y, point.z);
}

Curve::Vector Ellipse::getFirstDerivative(double t) const {
	return Curve::Vector(-1 * radius * sin(t), secondRadius * cos(t), 0.0);
}
