#include "PresidentialPardonForm.hpp"

// * CONSTRUCTOR / DESTRUCTOR *

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
{
	std::cout << "[ PresidentialPardonForm parameterized constructor ]" << std::endl;
	this->setName("PresidentialPardonForm");
	this->setTarget(target);
	this->setSign(145);
	this->setExec(137);
}

PresidentialPardonForm::PresidentialPardonForm(void)
{
	std::cout << "[ PresidentialPardonForm default constructor ]" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "[ PresidentialPardonForm destructor ]" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &object)
{
	std::cout << "[ PresidentialPardonForm copy constructor ]" << std::endl;
	this->setName(object.getName());
	this->setTarget(object.getTarget());
	this->setSign(object.getSign());
	this->setExec(object.getExec());
}

void PresidentialPardonForm::execute_PresidentialPardonForm(Bureaucrat const & executor) const
{
	(void)executor;
	//if (this->is_signed)
	//{
	//	if (executor.getGrade() >= this->exec && executor.getGrade() < 1)
	//	{
	//		//execute
	//	}
	//	else if (executor.getGrade() > 150)
	//		throw GradeTooHighException();
	//	else
	//		throw GradeTooLowException();
	//}
	//else
	//	std::cout << *this << std::endl;
}