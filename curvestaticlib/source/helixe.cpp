#include "helixe.h"

Helixe::Helixe(double x, double y, double z, unsigned int radius, int step) : Curve(x, y, z, radius), step(step) {
};

int Helixe::getStep() const {
	return step;
}

Curve::Point Helixe::getPoint(double t) const {
	return Curve::Point(radius * t * cos(t) + point.x, radius * t * sin(t) + point.y, step * t + point.z);
}

Curve::Vector Helixe::getFirstDerivative(double t) const {
	return Curve::Vector(radius * (cos(t) - (t * sin(t))), radius * (sin(t) + (t * cos(t))), step);
}
