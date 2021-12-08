#include "Fixed.hpp"

int main(void) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "/ : " << Fixed(25.65168f) / Fixed(0.6685f) << std::endl;
	std::cout << "* : " << Fixed(2.5f) * Fixed(5) << std::endl;
	std::cout << "+ : " << Fixed(33.6518f) + Fixed(1.555f) << std::endl;
	std::cout << "- : " << Fixed(25.65168f) - Fixed(25.65168f) << std::endl;
	return 0;
}