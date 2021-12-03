#include "Fixed.hpp"

//default constructor that initializes the fixed point value to 0
Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
}

//copy constructor (creating new object with same value as (object) passed a parameter)
Fixed::Fixed(const Fixed &object)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(object.getRawBits());
}

//assignation operator overload (overloading the value of an excisting object) 
Fixed& Fixed::operator=(const Fixed& object)
{
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(object.getRawBits());
	return *this;
}

//member function that returns the raw value of the fixed point value
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixed_point;
}

//member function that sets the raw value of the fixed point value
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_point = raw;
}

//destructor
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}