#include "Convert.hpp"

int main(int ac, char **av)
{
    try
    {
        if (ac != 2)
            throw Error::ArgumentException();
        Convert numberHolder(av[1]);
		numberHolder.checkString();
		try
		{
			numberHolder.printChar();
		}
		catch(const std::exception& e)
		{
			 std::cerr << e.what() << std::endl;
		}
		try
		{
			numberHolder.printInt();
		}
		catch(const std::exception& e)
		{
			 std::cerr << e.what() << std::endl;
		}
		try
		{
			numberHolder.printFloat();
		}
		catch(const std::exception& e)
		{
			 std::cerr << e.what() << std::endl;
		}
		try
		{
			numberHolder.printDouble();
		}
		catch(const std::exception& e)
		{
			 std::cerr << e.what() << std::endl;
		}
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}