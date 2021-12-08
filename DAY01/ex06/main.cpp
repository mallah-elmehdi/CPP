#include "Karen.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "ARGUMENT ERROR" << std::endl;
		return (1);
	}
	Karen miss_karen;
	miss_karen.complain(av[1]);
	return (0);
}