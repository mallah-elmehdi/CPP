#ifndef _POINT_HPP
#define _POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point(void);
		//Point(const Point& object);
		~Point(void);
		~Point(const float x, const foa);
};

#endif