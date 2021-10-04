#include "curve.h"

Curve::Curve(double x, double y, double z, unsigned int radius) : point(Point(x, y, z)), radius(radius) {

}

Curve::Point::Point(double x, double y, double z) : x(x), y(y), z(z) {

}

Curve::Vector::Vector(double x, double y, double z) : x(x), y(y), z(z) {

}

unsigned int Curve::getRadius() const {
	return radius;
}
