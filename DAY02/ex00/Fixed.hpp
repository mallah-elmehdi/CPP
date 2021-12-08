#ifndef _FIXED_HPP
#define _FIXED_HPP

#include <iostream>

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
		~Fixed(void);
};

#endif
