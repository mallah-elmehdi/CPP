#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	try
	{
		// * FORMS
		PresidentialPardonForm presidential_pardon("presidential pardon target");
		RobotomyRequestForm robotomy_request("robotomy request target");
		ShrubberyCreationForm shrubbery_creation("shrubbery creation target");
		// * ABSTACT CLASS
		//Form this_is_an_abstact_class;
		// * INCORRECT BEREAUCRAT
		Bureaucrat incorrect_bereaucrat_1("incorrect_bereaucrat", -10);
		Bureaucrat incorrect_bereaucrat_2("incorrect_bereaucrat", 0);
		Bureaucrat incorrect_bereaucrat_3("incorrect_bereaucrat", 166);
		presidential_pardon.beSigned(incorrect_bereaucrat_1);
		presidential_pardon.beSigned(incorrect_bereaucrat_2);
		presidential_pardon.beSigned(incorrect_bereaucrat_3);
		// * CORRECT BEREAUCRAT
		Bureaucrat correct_bereaucrat_1("correct_bereaucrat_1", 1);
		presidential_pardon.beSigned(correct_bereaucrat_1);
		robotomy_request.beSigned(correct_bereaucrat_1);
		shrubbery_creation.beSigned(correct_bereaucrat_1);
		std::cout << presidential_pardon << std::endl;
		std::cout << robotomy_request << std::endl;
		std::cout << shrubbery_creation << std::endl;
		correct_bereaucrat_1.executeForm(presidential_pardon);
		correct_bereaucrat_1.executeForm(robotomy_request);
		correct_bereaucrat_1.executeForm(shrubbery_creation);
		Bureaucrat correct_bereaucrat_2("correct_bereaucrat_2", 100);
		presidential_pardon.beSigned(correct_bereaucrat_2);
		robotomy_request.beSigned(correct_bereaucrat_2);
		shrubbery_creation.beSigned(correct_bereaucrat_2);
		std::cout << presidential_pardon << std::endl;
		std::cout << robotomy_request << std::endl;
		std::cout << shrubbery_creation << std::endl;
		correct_bereaucrat_2.executeForm(presidential_pardon);
		correct_bereaucrat_2.executeForm(robotomy_request);
		correct_bereaucrat_2.executeForm(shrubbery_creation);
	}
	catch(const std::exception& beruc)
	{
		std::cerr << beruc.what() << std::endl;
	}
}