#include "RobotomyRequestForm.hpp"

// * CONSTRUCTOR / DESTRUCTOR *

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
{
	//std::cout << "[ RobotomyRequestForm parameterized constructor ]" << std::endl;
	this->setName("RobotomyRequestForm");
	this->setTarget(target);
	this->setSign(72);
	this->setExec(45);
}

RobotomyRequestForm::RobotomyRequestForm(void)
{
	//std::cout << "[ RobotomyRequestForm default constructor ]" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	//std::cout << "[ RobotomyRequestForm destructor ]" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &object)
{
	//std::cout << "[ RobotomyRequestForm copy constructor ]" << std::endl;
	this->setName(object.getName());
	this->setTarget(object.getTarget());
	this->setSign(object.getSign());
	this->setExec(object.getExec());
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getSignature())
	{
		if (executor.getGrade() <= this->getExec())
		{
			std::srand((unsigned)std::time(0));
			if (std::rand() % 2)
				std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
			else
				std::cout << "it’s a failure" << std::endl;
		}
		else
			throw GradeTooLowException();
	}
	else
		throw FormNotSignedException();
}