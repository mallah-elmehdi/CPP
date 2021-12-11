#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

void identify(Base* p)
{
	A *Achecker = NULL;
	B *Bchecker = NULL;
	C *Cchecker = NULL;

	Achecker = dynamic_cast<A*>(p);
	if (Achecker)
	{
		std::cout << "A" << std::endl;
		return;
	}
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

void identify(Base& p)
{
	A Achecker;
	B Bchecker;
	C Cchecker;
	try
	{
		Achecker = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::bad_cast& e)
	{
		try
		{
			Bchecker = dynamic_cast<B &>(p);
			std::cout << "B" << std::endl;
		}
		catch(const std::bad_cast& e)
		{
			try
			{
				Cchecker = dynamic_cast<C &>(p);
				std::cout << "C" << std::endl;
			}
			catch(const std::bad_cast& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
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