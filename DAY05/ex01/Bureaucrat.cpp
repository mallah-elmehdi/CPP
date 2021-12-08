#include "Bureaucrat.hpp"
#include "Form.hpp"

//constructor / destructor
Bureaucrat::Bureaucrat(void) : name("untitled"), grade(0)
{
	std::cout << "[ Bureaucrat default constructor ]" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "[ Bureaucrat destructor ]" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &object) : name(object.name), grade(object.grade)
{
	std::cout << "[ Bureaucrat destructor ]" << std::endl;
}

//member functions
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

//operator overload
std::ostream& operator<< (std::ostream &stream, const Bureaucrat& object)
{
	stream << object.getName() << ", bureaucrat grade " << object.getGrade() << ".";
	return (stream);
}