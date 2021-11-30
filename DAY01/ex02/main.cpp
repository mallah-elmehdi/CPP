#include <iostream>

int main()
{
	std::string my_string = "HI THIS IS BRAIN";
	std::string *stringPTR = &my_string;
	std::string& stringREF = my_string;

	std::cout << std::endl << "* the address in memory of the string *" << std::endl;
	std::cout << &my_string << std::endl;
	std::cout << "* the address in memory of the string using stringPTR *" << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << "* the address in memory of the string using stringREF *" << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << std::endl << "* the value of the string *" << std::endl;
	std::cout << my_string << std::endl;
	std::cout << "* the value of the string using stringPTR *" << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << "* the value of the string using stringREF *" << std::endl;
	std::cout << stringREF << std::endl << std::endl;
}
