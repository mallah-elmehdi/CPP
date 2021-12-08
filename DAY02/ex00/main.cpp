#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c;
	
	c = b;
	
	std::cout << "********************************************" << std::endl;
	std::cout << a.getRawBits() << std::endl;
	std::cout << "********************************************" << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << "********************************************" << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << "********************************************" << std::endl;
	
	return 0;
}