#include "max.hpp"
#include "min.hpp"
#include "swap.hpp"
#include <iostream>

//class Awesome
//{
//	public:
//		Awesome(void) : _n(0) {}
//		Awesome( int n ) : _n( n ) {}
//		Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
//		bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
//		bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
//		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
//		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
//		bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
//		bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
//		int get_n() const { return _n; }
//	private:
//		int _n;
//};
//std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

int main(void) {
	std::cout << "*************************** INT ***************************" << std::endl;
	int ia = 2;
	int ib = 3;
	::swap<int>(ia, ib);
	std::cout << "ia = " << ia << ", ib = " << ib << std::endl;
	std::cout << "min(ia, ib) = " << ::min<int>(ia, ib) << std::endl;
	std::cout << "max(ia, ib) = " << ::max<int>(ia, ib) << std::endl;

	std::cout << "*************************** STRING ************************" << std::endl;
	std::string sa = "chaine1";
	std::string sb = "chaine2";
	::swap<std::string>(sa, sb);
	std::cout << "sa = " << sa << ", sb = " << sb << std::endl;
	std::cout << "min(sa, sb) = " << ::min<std::string>(sa, sb) << std::endl;
	std::cout << "max(sa, sb) = " << ::max<std::string>(sa, sb) << std::endl;

	std::cout << "*************************** FLOAT *************************" << std::endl;
	float fa = 516.66f;
	float fb = 16.03f;
	::swap<float>(fa, fb);
	std::cout << "fa = " << fa << ", fb = " << fb << std::endl;
	std::cout << "min(fa, fb) = " << ::min<float>(fa, fb) << std::endl;
	std::cout << "max(fa, fb) = " << ::max<float>(fa, fb) << std::endl;

	//std::cout << "*************************** CLASS *************************" << std::endl;
	//Awesome a(2), b(4);
	//swap<Awesome>(a, b);
	//std::cout << a << " " << b << std::endl;
	//std::cout << max<Awesome>(a, b) << std::endl;
	//std::cout << min<Awesome>(a, b) << std::endl;
	return 0;
}