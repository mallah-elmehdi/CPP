#include "Form.hpp"
#include "Intern.hpp"

int main(void)
{
	try
	{
		Intern writer;
		Form *form;
		// * ABSTACT CLASS *
		//Form abstractClass("I'am an abstract class");
		// * SHRUBBERYCREATIONFORM *
		{
			form = writer.makeForm("ShrubberyCreationForm", "shrubbery target");
			// - can sign and execute
			Bureaucrat userCanSignAndExecute("userCanSignAndExecute", 130);
			form->beSigned(userCanSignAndExecute);
			userCanSignAndExecute.executeForm(*form);
			// - can only sign
			Bureaucrat userCanOnlySign("userCanOnlySign", 140);
			form->beSigned(userCanOnlySign);
			userCanOnlySign.executeForm(*form);
			// - can't sign or execute
			Bureaucrat userCantSignOrExecute("userCantSignOrExecute", 146);
			form->beSigned(userCantSignOrExecute);
			userCantSignOrExecute.executeForm(*form);
		}
		// * ROBOTOMYREQUESTFORM *
		{
			form = writer.makeForm("RobotomyRequestForm", "robot target");
			// - can sign and execute
			Bureaucrat userCanSignAndExecute("userCanSignAndExecute", 40);
			form->beSigned(userCanSignAndExecute);
			userCanSignAndExecute.executeForm(*form);
			// - can only sign
			Bureaucrat userCanOnlySign("userCanOnlySign", 50);
			form->beSigned(userCanOnlySign);
			userCanOnlySign.executeForm(*form);
			// - can't sign or execute
			Bureaucrat userCantSignOrExecute("userCantSignOrExecute", 80);
			form->beSigned(userCantSignOrExecute);
			userCantSignOrExecute.executeForm(*form);
		}
		// * PRESIDENTIALPARDONFORM *
		{
			form = writer.makeForm("PresidentialPardonForm", "president target");
			// - can sign and execute
			Bureaucrat userCanSignAndExecute("userCanSignAndExecute", 40);
			form->beSigned(userCanSignAndExecute);
			userCanSignAndExecute.executeForm(*form);
			// - can only sign
			Bureaucrat userCanOnlySign("userCanOnlySign", 50);
			form->beSigned(userCanOnlySign);
			userCanOnlySign.executeForm(*form);
			// - can't sign or execute
			Bureaucrat userCantSignOrExecute("userCantSignOrExecute", 80);
			form->beSigned(userCantSignOrExecute);
			userCantSignOrExecute.executeForm(*form);
		}
	}
	catch(const std::exception& beruc)
	{
		std::cerr << beruc.what() << std::endl;
	}
}