#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		// * GETTERS *
		{
			Bureaucrat test("test", 10);
			std::cout << test.getGrade() << std::endl;
			std::cout << test.getName() << std::endl;
		}
		// * HIGH GRADE *
		Bureaucrat highGrade("High grade", -1);
		std::cout << highGrade << std::endl;;
		// * LOW GRADE *
		Bureaucrat lowGrade("Low grade", 151);
		std::cout << lowGrade << std::endl;;
		// * INCREMENT *
		Bureaucrat inc("inc", 5);
		for (int i = 0; i < 5; i++)
		{
			std::cout << inc << std::endl;
			inc.increment_grade();
		}
		// * DECREMENT *
		Bureaucrat dec("dec", 146);
		for (int i = 0; i < 5; i++)
		{
			std::cout << dec << std::endl;
			dec.decrement_grade();
		}
	}
	catch(const std::exception& beruc)
	{
		std::cerr << beruc.what() << std::endl;
	}
}