#ifndef CURVE_H
#define CURVE_H

#include <iostream>

class Curve {
private:
	struct Point {
		int x;
		int y;
		int z;
		Point(int x, int y, int z);
	};

protected:
	Point point;
	unsigned int radius;

public:
	unsigned int getRadius() const;
	const Point& getPoint() const;
	virtual void getFirstDerivative() const = 0;

protected:
	Curve(int x, int y, int z, int radius);

	friend std::ostream& operator<< (std::ostream&, const Curve::Point&);
};

#endif
