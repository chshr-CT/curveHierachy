#ifndef CURVE_H
#define CURVE_H

#include <iostream>

class Curve {
protected:
	struct Point {
		double x;
		double y;
		double z;
		Point(double x, double y, double z);
	};

	struct Vector {
		double x;
		double y;
		double z;
		Vector(double x, double y, double z);
	};

protected:
	Point point;
	unsigned int radius;

public:
	unsigned int getRadius() const;
	virtual Point getPoint(double t) const = 0;
	virtual Vector getFirstDerivative(double t) const = 0;
	virtual ~Curve() = default;

protected:
	Curve(double x, double y, double z, unsigned int radius);

	friend std::ostream& operator<< (std::ostream&, const Curve::Vector&);
	friend std::ostream& operator<< (std::ostream&, const Curve::Point&);
};

#endif
