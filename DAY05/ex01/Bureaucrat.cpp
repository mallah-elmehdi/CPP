#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
	std::cout << "[ Bureaucrat constructor ]" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "[ Bureaucrat destructor ]" << std::endl;
}

std::string Bureaucrat::getName(void) const
{
	return (this->name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void	Bureaucrat::signForm(Form &object, std::string reason)
{
	if (object.getSignature())
		std::cout << this->name << " signs " << object.getName() << " form."  << std::endl;
	else
		std::cout << this->name << " cannot sign " << object.getName() << " form because " << reason << "." << std::endl;
}

std::ostream& operator<< (std::ostream &stream, const Bureaucrat& object)
{
	stream << object.getName() << ", bureaucrat grade " << object.getGrade() << ".";
	return (stream);
}