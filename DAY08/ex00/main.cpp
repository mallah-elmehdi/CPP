#include "easyfind.hpp"

int main()
{
	try
	{
		/* vector */
		std::cout << "* VECTOR *" << std::endl;
		std::vector<int> vect(10, -3);
		std::cout << *easyfind(vect, -3) << std::endl;
		for (size_t i = 0; i < 10; i++)
			vect[i] = i;
		std::cout << *easyfind(vect, 0) << std::endl;
		std::cout << *easyfind(vect, 5) << std::endl;
		std::cout << *easyfind(vect, 10) << std::endl;
		/* list */
		std::cout << "* LIST *" << std::endl;
		std::list<int> lis;
		for (size_t i = 0; i < 10; i++)
			lis.push_back(i);
		std::cout << *easyfind(lis, 0) << std::endl;
		std::cout << *easyfind(lis, 5) << std::endl;
		std::cout << *easyfind(lis, 10) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "[ EXCEPTION THROWN ] : element can't be found" << '\n';
	}
	
}