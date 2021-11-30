#include "Karen.hpp"

int	condition_debug(std::string str)
{
	return (str == "DEBUG");
}

int	condition_info(std::string str)
{
	return (str == "INFO");
}

int	condition_warning(std::string str)
{
	return (str == "WARNING");
}

int	condition_error(std::string str)
{
	return (str == "ERROR");
}

int main()
{
	Karen miss_karen;
	std::cout << "\n********************* DEBUG\n" << std::endl;
	miss_karen.complain("DEBUG");
	std::cout << "\n********************* INFO\n" << std::endl;
	miss_karen.complain("INFO");
	std::cout << "\n********************* WARNING\n" << std::endl;
	miss_karen.complain("WARNING");
	std::cout << "\n********************* ERROR\n" << std::endl;
	miss_karen.complain("ERROR");
	std::cout << "\n********************* NOT VALID\n" << std::endl;
	miss_karen.complain("NOT VALID");
}