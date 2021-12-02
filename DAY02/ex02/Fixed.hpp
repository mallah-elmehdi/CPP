#ifndef _FIXED_HPP
#define _FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int fixed_point;
		static const int number_of_fractional_bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &object);
		Fixed& operator=(const Fixed& object);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed(const int integer);
		Fixed(const float floating_point);
		float toFloat(void) const;
		int toInt(void) const;
		//----
		bool operator>(const Fixed& object);
		bool operator<(const Fixed& object);
		bool operator>=(const Fixed& object);
		bool operator<=(const Fixed& object);
		bool operator==(const Fixed& object);
		bool operator!=(const Fixed& object);
		Fixed& operator+(const Fixed& object);
		Fixed& operator-(const Fixed& object);
		Fixed& operator*(const Fixed& object);
		Fixed& operator/(const Fixed& object);
		//----
		~Fixed(void);
};

std::ostream& operator<< (std::ostream &stream, const Fixed& object);

#endif
