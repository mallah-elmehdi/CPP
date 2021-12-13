#include "iter.hpp"
#include <iostream>
#include <iostream>

// function for string
void printUpper(const std::string &str)
{
	for (unsigned int i = 0; i < str.size(); i++)
	{
		std::cout << static_cast<char>(toupper(str[i]));
	}
	std::cout << std::endl;
}
void printLower(const std::string &str)
{
	for (unsigned int i = 0; i < str.size(); i++)
	{
		std::cout << static_cast<char>(tolower(str[i]));
	}
	std::cout << std::endl;
}
// function for int
void printIncrement(const int &intArrayElement)
{
	std::cout << intArrayElement + 1 << std::endl;
}
void printfDecrement(const int &intArrayElement)
{
	std::cout << intArrayElement - 1 << std::endl;
}

int main()
{
	std::cout << "******************************************* STRING" << std::endl;
	std::string str[] = {"el mehdi", "mallah"};
	iter<std::string>(str, 2, &printUpper);
	iter<std::string>(str, 2, &printLower);
	std::cout << "******************************************* INT" << std::endl;
	int intArray[] = {100, 526, 993, -95, 78};
	iter<int>(intArray, 5, &printIncrement);
	iter<int>(intArray, 5, &printfDecrement);
}