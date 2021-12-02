#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->fixed_point = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int fixed_point)
{
	this->fixed_point = fixed_point;
	std::cout << "Constructor with param called" << std::endl;
}

//creating new object with same value as (object) passed a parameter
Fixed::Fixed(const Fixed &object)
{
	this->fixed_point = object.fixed_point;
	std::cout << "Copy constructor called" << std::endl;
}

// overloading the value of an excisting object 
Fixed& Fixed::operator=(const Fixed& object)
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixed_point = object.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixed_point;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_point = raw;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}