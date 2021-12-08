#include "ShrubberyCreationForm.hpp"
#include <fstream>

// * CONSTRUCTOR / DESTRUCTOR *

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
{
	//std::cout << "[ ShrubberyCreationForm parameterized constructor ]" << std::endl;
	this->setName("ShrubberyCreationForm");
	this->setTarget(target);
	this->setSign(145);
	this->setExec(137);
}

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
	//std::cout << "[ ShrubberyCreationForm default constructor ]" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	//std::cout << "[ ShrubberyCreationForm destructor ]" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &object)
{
	//std::cout << "[ ShrubberyCreationForm copy constructor ]" << std::endl;
	this->setName(object.getName());
	this->setTarget(object.getTarget());
	this->setSign(object.getSign());
	this->setExec(object.getExec());
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getSignature())
	{
		if (executor.getGrade() <= this->getExec())
		{
			std::fstream file;
			file.open(this->getTarget() + "_shrubbery", std::fstream::out | std::fstream::trunc);
			if (file.fail())
				throw FileErrorException();
			file << " _" << std::endl;
			file << "| |" << std::endl;
			file << "| |_ _ __ ___  ___" << std::endl;
			file << "| __| '__/ _ \\/ _ \\" << std::endl;
			file << "| |_| | |  __/  __/" << std::endl;
			file << " \\__|_|  \\___|\\___|" << std::endl;
		}
		else
			throw GradeTooLowException();
	}
	else
		throw FormNotSignedException();
}