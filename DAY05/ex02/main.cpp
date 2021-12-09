#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	try
	{
		// * ABSTACT CLASS *
		//Form abstractClass("I'am an abstract class");
		// * SHRUBBERYCREATIONFORM *
		{
			ShrubberyCreationForm shrubbery("shrubbery target");
			// - can sign and execute
			Bureaucrat userCanSignAndExecute("userCanSignAndExecute", 130);
			shrubbery.beSigned(userCanSignAndExecute);
			userCanSignAndExecute.executeForm(shrubbery);
			// - can only sign
			Bureaucrat userCanOnlySign("userCanOnlySign", 140);
			shrubbery.beSigned(userCanOnlySign);
			userCanOnlySign.executeForm(shrubbery);
			// - can't sign or execute
			Bureaucrat userCantSignOrExecute("userCantSignOrExecute", 146);
			shrubbery.beSigned(userCantSignOrExecute);
			userCantSignOrExecute.executeForm(shrubbery);
		}
		// * ROBOTOMYREQUESTFORM *
		{
			RobotomyRequestForm robot("robot target");
			// - can sign and execute
			Bureaucrat userCanSignAndExecute("userCanSignAndExecute", 40);
			robot.beSigned(userCanSignAndExecute);
			userCanSignAndExecute.executeForm(robot);
			// - can only sign
			Bureaucrat userCanOnlySign("userCanOnlySign", 50);
			robot.beSigned(userCanOnlySign);
			userCanOnlySign.executeForm(robot);
			// - can't sign or execute
			Bureaucrat userCantSignOrExecute("userCantSignOrExecute", 80);
			robot.beSigned(userCantSignOrExecute);
			userCantSignOrExecute.executeForm(robot);
		}
		// * PRESIDENTIALPARDONFORM *
		{
			PresidentialPardonForm president("president target");
			// - can sign and execute
			Bureaucrat userCanSignAndExecute("userCanSignAndExecute", 40);
			president.beSigned(userCanSignAndExecute);
			userCanSignAndExecute.executeForm(president);
			// - can only sign
			Bureaucrat userCanOnlySign("userCanOnlySign", 50);
			president.beSigned(userCanOnlySign);
			userCanOnlySign.executeForm(president);
			// - can't sign or execute
			Bureaucrat userCantSignOrExecute("userCantSignOrExecute", 80);
			president.beSigned(userCantSignOrExecute);
			userCantSignOrExecute.executeForm(president);
		}
	}
	catch(const std::exception& beruc)
	{
		std::cerr << beruc.what() << std::endl;
	}
}