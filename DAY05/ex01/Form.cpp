#include "Form.hpp"

Form::Form(std::string name): name(name)
{
	std::cout << "[ Form constructor ]" << std::endl;
	this->is_signed = false;
}

Form::~Form(void)
{
	std::cout << "[ Form destructor ]" << std::endl;
}

std::string Form::getName(void) const
{
	return (this->name);
}

bool Form::getSignature(void) const
{
	return (this->is_signed);
}

void Form::beSigned(Bureaucrat &object)
{
	if (object.getGrade() < 1)
	{
		object.signForm(*this, "grade too high");
		throw Form::GradeTooHighException();
	}
	if (object.getGrade() > 150)
	{
		object.signForm(*this, "grade too low");
		throw Form::GradeTooLowException();
	}
	this->is_signed = true;
	object.signForm(*this, "");
	
}

std::ostream& operator<< (std::ostream &stream, const Form& object)
{
	if (object.getSignature())
		stream << object.getName() << " form is signed.";
	else
		stream << object.getName() << " form is not signed.";
	return (stream);
}