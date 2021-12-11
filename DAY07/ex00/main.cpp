#include "max.hpp"
#include "min.hpp"
#include "swap.hpp"
#include <iostream>

int main(void) {
	std::cout << "*************************** INT ***************************" << std::endl;
	int ia = 2;
	int ib = 3;
	::swap(&ia, &ib);
	std::cout << "ia = " << ia << ", ib = " << ib << std::endl;
	std::cout << "min(ia, ib) = " << ::min(ia, ib) << std::endl;
	std::cout << "max(ia, ib) = " << ::max(ia, ib) << std::endl;

	std::cout << "*************************** STRING ************************" << std::endl;
	std::string sa = "chaine1";
	std::string sb = "chaine2";
	::swap(&sa, &sb);
	std::cout << "sa = " << sa << ", sb = " << sb << std::endl;
	std::cout << "min(sa, sb) = " << ::min(sa, sb) << std::endl;
	std::cout << "max(sa, sb) = " << ::max(sa, sb) << std::endl;

	std::cout << "*************************** FLOAT *************************" << std::endl;
	float fa = 516.66f;
	float fb = 16.03f;
	::swap(&fa, &fb);
	std::cout << "fa = " << fa << ", fb = " << fb << std::endl;
	std::cout << "min(fa, fb) = " << ::min(fa, fb) << std::endl;
	std::cout << "max(fa, fb) = " << ::max(fa, fb) << std::endl;
	return 0;
}