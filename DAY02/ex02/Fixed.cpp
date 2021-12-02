#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->fixed_point = 0;
	std::cout << "Default constructor called" << std::endl;
}

//creating new object with same value as (object) passed a parameter
Fixed::Fixed(const Fixed &object)
{
	*this = object;
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

//----

Fixed::Fixed(const int integer)
{	
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point = integer * (1 << this->number_of_fractional_bits);
}

Fixed::Fixed(const float floating_point)
{	
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point = roundf(floating_point * (1 << this->number_of_fractional_bits));
}

float Fixed::toFloat( void ) const
{
	return (float)(this->fixed_point) / (float)(1 << this->number_of_fractional_bits);
}

int Fixed::toInt( void ) const
{
	return this->fixed_point / (1 << this->number_of_fractional_bits);
}

std::ostream& operator<< (std::ostream &stream, const Fixed& object)
{
	stream << object.toFloat();
	return (stream);
}