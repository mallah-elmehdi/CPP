#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

void identify(Base* p)
{
	A *Achecker;
	B *Bchecker;
	C *Cchecker;

	Achecker = dynamic_cast<A*>(p);
	if (Achecker)
	{
		std::cout << "A" << std::endl;
		return;
	}
	Bchecker = dynamic_cast<B*>(p);
	if (Bchecker)
	{
		std::cout << "B" << std::endl;
		return;
	}
	Cchecker = dynamic_cast<C*>(p);
	if (Cchecker)
	{
		std::cout << "C" << std::endl;
		return;
	}
}

Base* generate(void)
{
	static int random;	

	random++;
	if (random % 2 == 0)
		return (new A());
	else if (random % 5 == 0)
		return (new B());
	return (new C());
}


int main(void)
{
	Base *base;
	
	base = generate();
	identify(base);
	base = generate();
	identify(base);
	base = generate();
	identify(base);
	base = generate();
	identify(base);
	base = generate();
	identify(base);
}