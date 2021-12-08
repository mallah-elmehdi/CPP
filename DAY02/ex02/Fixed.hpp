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
		// *******************************
		bool operator>(const Fixed& object);
		bool operator<(const Fixed& object);
		bool operator>=(const Fixed& object);
		bool operator<=(const Fixed& object);
		bool operator==(const Fixed& object);
		bool operator!=(const Fixed& object);
		Fixed operator+(const Fixed& object);
		Fixed operator-(const Fixed& object);
		Fixed operator*(const Fixed& object);
		Fixed operator/(const Fixed& object);
		Fixed operator++(int);
		Fixed operator++(void);
		static const Fixed& max(const Fixed& object1, const Fixed& object2)
		{
			if ((Fixed&)object1 > object2)
				return (object1);
			return (object2);
		};
		static Fixed& max(Fixed& object1, Fixed& object2)
		{
			if (object1 > (const Fixed&)object2)
				return (object1);
			return (object2);
		};
		static const Fixed& min(const Fixed& object1, const Fixed& object2)
		{
			if ((Fixed&)object1 > object2)
				return (object2);
			return (object1);
		};
		static Fixed& min(Fixed& object1, Fixed& object2)
		{
			if (object1 > (const Fixed&)object2)
				return (object2);
			return (object1);
		};
		~Fixed(void);
};

std::ostream& operator<< (std::ostream &stream, const Fixed& object);

#endif
