#include "Form.hpp"

//constructor / destructor
Form::Form(void): name("untitled")
{
	std::cout << "[ Form default constructor ]" << std::endl;
	is_signed = false;
}

Form::Form(std::string name): name(name)
{
	std::cout << "[ Form parameterized constructor ]" << std::endl;
	is_signed = false;
}

Form::~Form(void)
{
	std::cout << "[ Form destructor ]" << std::endl;
}

//member function
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

//operator overload
std::ostream& operator<< (std::ostream &stream, const Form& object)
{
	if (object.getSignature())
		stream << object.getName() << " form is signed.";
	else
		stream << object.getName() << " form is not signed.";
	return (stream);
}