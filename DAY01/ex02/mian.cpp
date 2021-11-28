#include <iostream>

int main()
{
	std::string my_string;
	std::string *stringPTR;

	my_string = "HI THIS IS BRAIN";
	std::cout << "* the address in memory of the string *\n";
	std::cout << &my_string;
}