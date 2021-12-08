#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat beru("mehdi", 4);
		ShrubberyCreationForm test("target11");
		test.beSigned(beru);
		std::cout << test << std::endl;
		beru.executeForm(test);
		//std::cout << " *************** " << std::endl;
	}
	catch(const std::exception& beruc)
	{
		std::cerr << beruc.what() << std::endl;
	}
}