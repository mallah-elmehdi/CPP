#include "PresidentialPardonForm.hpp"

// * CONSTRUCTOR / DESTRUCTOR *

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
{
	//std::cout << "[ PresidentialPardonForm parameterized constructor ]" << std::endl;
	this->setName("PresidentialPardonForm");
	this->setTarget(target);
	this->setSign(25);
	this->setExec(5);
}

PresidentialPardonForm::PresidentialPardonForm(void)
{
	//std::cout << "[ PresidentialPardonForm default constructor ]" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	//std::cout << "[ PresidentialPardonForm destructor ]" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &object)
{
	//std::cout << "[ PresidentialPardonForm copy constructor ]" << std::endl;
	this->setName(object.getName());
	this->setTarget(object.getTarget());
	this->setSign(object.getSign());
	this->setExec(object.getExec());
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSignature())
	{
		if (executor.getGrade() <= this->getExec())
			std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
		else
			throw GradeTooLowException();
	}
	else
		throw FormNotSignedException();
}