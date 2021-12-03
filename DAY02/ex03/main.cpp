#include "Point.hpp"

int main(void) {
	//tri 1
	Point a(1.0, 1.0);
	Point b(50.0, 50.0);
	Point c(100.0, 1.0);

	Point point_inside(50.0, 2.0);
	Point point_outside(1.0, 33.0);
	Point point_in_the_edge(1.0, 1.0);
	//tri 2
	//Point a(-10.0, -10.0);
	//Point b(0.0, 10.0);
	//Point c(10.0, -10.0);

	//Point point_inside(0.0, 2.0);
	//Point point_outside(-11.0, 2.0);
	//Point point_in_the_edge(10.0, -10.0);

	std::cout << "* INSIDE THE TRIANGLE *" << std::endl;
	std::cout << bsp(a, b, c, point_inside) << std::endl;
	std::cout << "* OUTSIDE THE TRIANGLE *" << std::endl;
	std::cout << bsp(a, b, c, point_outside) << std::endl;
	std::cout << "* IN THE EDGE THE TRIANGLE *" << std::endl;
	std::cout << bsp(a, b, c, point_in_the_edge) << std::endl;
	return 0;
}