#include "Point.hpp"

Point::Point(void)
{
	//nothing
}
Point::~Point(void)
{
	//std::cout << "Destructor called" << std::endl;
}
Point::Point(const Point& object) : x(object.x), y(object.y)
{
	//std::cout << "copy constructor called" << std::endl;
}
Point::Point(const float fx, const float fy) : x(Fixed(fx)), y(Fixed(fy))
{
	//std::cout << "constructor called" << std::endl;
}

Point& Point::operator=(const Point& object)
{
	(void)object;
	return (*this);
}

float Point::get_x(void) const
{
	return (this->x.toFloat());
}

float Point::get_y(void) const
{
	return (this->y.toFloat());
}