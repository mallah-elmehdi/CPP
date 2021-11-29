#include <iostream>

int main()
{
	std::string my_string = "HI THIS IS BRAIN";
	std::string *stringPTR = &my_string;
	std::string& stringREF = my_string;

	std::cout << "* the address in memory of the string *\n";
	std::cout << &my_string << std::endl;
	std::cout << "* the address in memory of the string using stringPTR *\n";
	std::cout << stringPTR << std::endl;
	std::cout << "* the address in memory of the string using stringREF *\n";
	std::cout << &stringREF << std::endl;
}
