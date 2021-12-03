#include "Point.hpp"

float triangle_area(Point const a1, Point const a2, Point const a3)
{
	float area = (a1.get_x() * (a2.get_y() - a3.get_y())) + (a2.get_x() * (a3.get_y() - a1.get_y())) + (a3.get_x() * (a1.get_y() - a2.get_y()));
	return (area < 0 ? area * -0.5 : area * 0.5);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float first_area = triangle_area(a, b, point);
	float second_area = triangle_area(a, point, c);
	float last_area = triangle_area(point, b, c);
	float main_area = triangle_area(a, b, c);
	return (first_area && second_area && last_area && main_area == (first_area + second_area + last_area));
}