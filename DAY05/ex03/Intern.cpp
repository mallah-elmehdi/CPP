#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

// * CONSTRUCTOR / DESTRUCTOR *
Intern::Intern(void)
{
	//std::cout << "[ Intern default constructor ]" << std::endl;
}

Intern::Intern(const Intern &object)
{
	(void)object;
	//std::cout << "[ Intern copy constructor ]" << std::endl;
}

Intern::~Intern(void)
{
	//std::cout << "[ Intern destructor ]" << std::endl;
}

Form *Intern::makeForm(std::string name, std::string target)
{
	std::string forms[3] =
	{
		"PresidentialPardonForm",
		"RobotomyRequestForm",
		"ShrubberyCreationForm"
	};
	int index = 0;
	while (index < 3 && forms[index] != name)
		index++;
	switch (index)
	{
		case 0:
			std::cout << "Intern creates " << name << std::endl;
			return (new PresidentialPardonForm(target));
		case 1:
			std::cout << "Intern creates " << name << std::endl;
			return (new RobotomyRequestForm(target));
		case 2:
			std::cout << "Intern creates " << name << std::endl;
			return (new ShrubberyCreationForm(target));
	}
	return (NULL);
}