#include "curve.h"

Curve::Curve(int x, int y, int z, int radius) : point(Point(x, y, z)), radius(radius) {

}

Curve::Point::Point(int x, int y, int z) : x(x), y(y), z(z) {

}

unsigned int Curve::getRadius() const {
	return radius;
}

const Curve::Point& Curve::getPoint() const {
	return point;
}
