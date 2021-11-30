#include "Karen.hpp"

int	conditions(std::string str)
{
	int i;
	
	i = 1;
	while (str != "DEBUG")
	{
		i++;
		while (str != "INFO")
		{
			i++;
			while (str != "WARNING")
			{
				i++;
				while (str != "ERROR" )
				{
					i = 0;
					break ;
				}
				break ;
			}
			break ;
		}
		break ;
	}
	return (i);
}


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