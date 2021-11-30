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
	std::cout << std::endl << "********************* DEBUG" << std::endl << std::endl;
	miss_karen.complain("DEBUG");
	std::cout << std::endl << "********************* INFO" << std::endl << std::endl;
	miss_karen.complain("INFO");
	std::cout << std::endl << "********************* WARNING" << std::endl << std::endl;
	miss_karen.complain("WARNING");
	std::cout << std::endl << "********************* ERROR" << std::endl << std::endl;
	miss_karen.complain("ERROR");
	std::cout << std::endl << "********************* NOT VALID" << std::endl << std::endl;
	miss_karen.complain("NOT VALID");
}