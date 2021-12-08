#include "Karen.hpp"

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