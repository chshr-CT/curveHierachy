#include "circle.h"

Circle::Circle(double x, double y, double z, unsigned int radius) : Curve(x, y, z, radius) {

}

Curve::Point Circle::getPoint(double t) const {
	return Curve::Point(radius * cos(t) + point.x, radius * sin(t) + point.y, point.z);
}

Curve::Vector Circle::getFirstDerivative(double t) const {
	return Curve::Vector(-1 * radius * sin(t), radius * cos(t), 0.0);
}
