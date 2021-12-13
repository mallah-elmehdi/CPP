#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

void identify(Base* p)
{
	A *Achecker = dynamic_cast<A*>(p);
	if (Achecker)
	{
		std::cout << "A" << std::endl;
		return;
	}
	B *Bchecker = dynamic_cast<B*>(p);
	if (Bchecker)
	{
		std::cout << "B" << std::endl;
		return;
	}
	C *Cchecker = dynamic_cast<C*>(p);
	if (Cchecker)
	{
		std::cout << "C" << std::endl;
		return;
	}
}

void identify(Base& p)
{
	static int i;
	try
	{
		if (i == 0)
		{
			A checker = dynamic_cast<A &>(p);
			std::cout << "A" << std::endl;
		}
		else if (i == 1)
		{
			B checker = dynamic_cast<B &>(p);
			std::cout << "B" << std::endl;
		}
		else
		{
			C checker = dynamic_cast<C &>(p);
			std::cout << "C" << std::endl;
		}
	}
	catch(const std::bad_cast& e)
	{
		i = i == 2 ? 0 : i + 1;
		identify(p);
	}
}

Base* generate(void)
{
	static int random;	

	random = random == 3 ? 1 : random + 1;
	if (random == 1)
		return (new A());
	else if (random == 2)
		return (new B());
	return (new C());
}


int main(void)
{
	std::cout << " * DYNAMIC CAST POINTERS * " << std::endl;
	Base *base;
	
	base = generate();
	identify(base);
	base = generate();
	identify(base);
	base = generate();
	identify(base);
	std::cout << " * DYNAMIC CAST REFRENCE * " << std::endl;
	A a;
	B b;
	C c;
	Base &baseA = a;
	Base &baseB = b;
	Base &baseC = c;
	identify(baseA);
	identify(baseB);
	identify(baseC);
}