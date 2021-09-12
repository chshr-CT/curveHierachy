#include "curve.h"
#include "circle.h"
#include "ellipse.h"
#include "helixe.h"

#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
#include <omp.h>

std::ostream& operator<< (std::ostream& out, const Curve::Point& point) {
	out << "X = " << point.x << " Y = " << point.y << " Z = " << point.z << ' ';
	return out;
}

int main() {
	std::vector<std::shared_ptr<Curve>> curvesVector;
	curvesVector.push_back(std::make_shared<Circle>(1, 2, 3, 6));
	curvesVector.push_back(std::make_shared<Ellipse>(3, 4, 4, 1, 6));
	curvesVector.push_back(std::make_shared<Helixe>(1, 6, 8, 3, 9));
	curvesVector.push_back(std::make_shared<Ellipse>(2, 5, 8, 2, 1));
	curvesVector.push_back(std::make_shared<Circle>(5, 6, 7, 8));
	curvesVector.push_back(std::make_shared<Helixe>(4, 2, 8, 1, 3));

	curvesVector.push_back(std::make_shared<Circle>(1, 2, 3, 7));
	curvesVector.push_back(std::make_shared<Ellipse>(3, 7, 4, 1, 6));
	curvesVector.push_back(std::make_shared<Helixe>(1, 6, 8, 3, 9));
	curvesVector.push_back(std::make_shared<Ellipse>(2, 7, 8, 2, 1));
	curvesVector.push_back(std::make_shared<Circle>(5, 6, 7, 9));
	curvesVector.push_back(std::make_shared<Helixe>(4, 2, 8, 7, 3));

	std::vector<std::shared_ptr<Circle>> circlesVector;
	circlesVector.reserve(curvesVector.size());

	for(const std::shared_ptr<Curve>& element : curvesVector) {
		std::cout << element->getPoint();
		element->getFirstDerivative();
		if(Circle* ptr = dynamic_cast<Circle*>(element.get())) {
			circlesVector.emplace_back(element, ptr);
		}
	}

	std::sort(circlesVector.begin(), circlesVector.end(), 
			  [](const std::shared_ptr<Circle>& firstElement, const std::shared_ptr<Circle>& secondElement) -> bool {
			  		return firstElement->getRadius() < secondElement->getRadius();
			  }
			 );


	int sum = 0;

	#pragma omp parallel for default(shared) reduction(+:sum)
	for(size_t i = 0; i < circlesVector.size(); i++) {
		sum += circlesVector[i]->getRadius();
	}
	/*for(std::vector<std::shared_ptr<Circle>>::iterator it = circlesVector.begin(); it != circlesVector.end(); ++it) {
		sum += (*it)->getRadius();
	}*/
	
	std::cout << "Sum of all circles = " << sum << '\n';
}
