#include "Form.hpp"
#include "Intern.hpp"

int main(void)
{
	try
	{
		// * FORMS
		Intern intern;
		Form *form = intern.makeForm("PresidentialPardonForm", "presidential pardon target");
		//Form *form = intern.makeForm("RobotomyRequestForm", "robotomy request target");
		//Form *form = intern.makeForm("ShrubberyCreationForm", "shrubbery creation target");
		//Form *form = intern.makeForm("wrongForm", "wrong target");
		// * TESTS
		if (form)
		{
			Bureaucrat correct_bereaucrat_1("correct_bereaucrat_1", 1);
			form->beSigned(correct_bereaucrat_1);
			std::cout << *form << std::endl;
			correct_bereaucrat_1.executeForm(*form);
		}
	}
	catch(const std::exception& beruc)
	{
		std::cerr << beruc.what() << std::endl;
	}
}