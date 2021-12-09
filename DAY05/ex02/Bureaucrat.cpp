#include "Bureaucrat.hpp"
#include "Form.hpp"

// * CONSTRUCTOR / DESTRUCTOR *
Bureaucrat::Bureaucrat(void)
{
	//std::cout << "[ Bureaucrat default constructor ]" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	//std::cout << "[ Bureaucrat destructor ]" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &object) : name(object.name), grade(object.grade)
{
	//std::cout << "[ Bureaucrat copy constructor ]" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade)
{
	//std::cout << "[ Bureaucrat parameterized constructor ]" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

// * MEMBER FUNCTIONS *
std::string Bureaucrat::getName(void) const
{
	return (this->name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void Bureaucrat::decrement_grade(void)
{
	if ((this->grade + 1) > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

void Bureaucrat::increment_grade(void)
{
	if ((this->grade - 1) < 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void Bureaucrat::signForm(const std::string message)
{
	std::cout << message << std::endl;
}

void Bureaucrat::executeForm(Form const &form)
{
	form.execute(*this);
	std::cout << this->getName() << " executes " << form.getName() << std::endl;
}

// * OPERATOR OVERLOAD *
std::ostream& operator<< (std::ostream &stream, const Bureaucrat& object)
{
	stream << object.getName() << ", bureaucrat grade " << object.getGrade();
	return (stream);
}