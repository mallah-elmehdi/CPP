#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		//Bureaucrat test("mehdi", 1000);
		//Bureaucrat test("mehdi", 1000);
		//Bureaucrat test("mehdi", 1000);
		//Bureaucrat test("mehdi", 1000);
		Bureaucrat test("mehdi", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}