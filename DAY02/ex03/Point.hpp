#ifndef _POINT_HPP
#define _POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point(void);
		Point(const Point& object);
		~Point(void);
		Point(const float fx, const float fy);
		Point& operator=(const Point& object);
		float get_x(void) const;
		float get_y(void) const;
};

float triangle_area(Point const a1, Point const a2, Point const a3);
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif