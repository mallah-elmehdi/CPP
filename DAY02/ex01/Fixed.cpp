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

// *******************************

//constructor that takes a constant integer as a parameter and that converts it to the correspondant fixed(8) point value
Fixed::Fixed(const int integer)
{	
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point = integer * (1 << this->number_of_fractional_bits);
}

//constructor that takes a constant floating point as a parameter and that converts it to the correspondant fixed(8) point value
Fixed::Fixed(const float floating_point)
{	
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point = roundf(floating_point * (1 << this->number_of_fractional_bits));
}

//member function that converts the fixed point value to a floating point value
float Fixed::toFloat(void) const
{
	return (float)(this->fixed_point) / (float)(1 << this->number_of_fractional_bits);
}

//member that converts the fixed point value to an integer value
int Fixed::toInt(void) const
{
	return this->fixed_point / (1 << this->number_of_fractional_bits);
}

//« operator that inserts a floating point representation of the fixed point value into the parameter output stream
std::ostream& operator<< (std::ostream &stream, const Fixed& object)
{
	stream << object.toFloat();
	return (stream);
}