#include "Bureaucrat.hpp"
#include "Form.hpp"

// * CONSTRUCTOR / DESTRUCTOR *
Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
	std::cout << "[ Bureaucrat parameterized constructor ]" << std::endl;
}

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

// * MEMBER FUNCTION *
// - gette
std::string Bureaucrat::getName(void) const
{
	return (this->name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

// - other
void Bureaucrat::signForm(Form &object, std::string reason)
{
	if (object.getSignature())
		std::cout << this->name << " signs " << object.getName() << " form."  << std::endl;
	else
		std::cout << this->name << " cannot sign " << object.getName() << " form because " << reason << "." << std::endl;
}

void Bureaucrat::executeForm(Form const &form)
{
	form.execute(*this);
	std::cout << this->getName() << " executes " << form.getName() << std::endl;
}

//operator overload
std::ostream& operator<< (std::ostream &stream, const Bureaucrat& object)
{
	stream << object.getName() << ", bureaucrat grade " << object.getGrade() << ".";
	return (stream);
}