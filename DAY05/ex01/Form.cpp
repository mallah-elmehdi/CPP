#include "Form.hpp"

// * CONSTRUCTOR / DESTRUCTOR *
Form::Form(void): name("untitled"), sign(75), exec(50)
{
	//std::cout << "[ Form default constructor ]" << std::endl;
	is_signed = false;
}

Form::Form(const std::string name) : name(name), sign(75), exec(50)
{
	//std::cout << "[ Form parameterized constructor ]" << std::endl;
	is_signed = false;
}

Form::~Form(void)
{
	//std::cout << "[ Form destructor ]" << std::endl;
}

Form::Form(const Form &object) : name(object.getName()), sign(object.getSign()), exec(object.getExec())
{
	//std::cout << "[ Form copy constructor ]" << std::endl;
	this->is_signed = object.getSignature();
}

// * MEMBER FUNCTION *
// - getter
std::string Form::getName(void) const
{
	return (this->name);
}

bool Form::getSignature(void) const
{
	return (this->is_signed);
}

int Form::getSign(void) const
{
	return (this->sign);
}

int Form::getExec(void) const
{
	return (this->exec);
}

// - other
void Form::beSigned(Bureaucrat &object)
{
	if (object.getGrade() > this->getSign())
	{
		object.signForm(object.getName() + " cannot sign " + this->getName());
		throw Form::GradeTooLowException();
	}
	this->is_signed = true;
	object.signForm(object.getName() + " signs " + this->getName());
}

// * OPERATOR OVERLOAD *
std::ostream& operator<< (std::ostream &stream, const Form& object)
{
	if (object.getSignature())
		stream << object.getName() << " form is signed.";
	else
		stream << object.getName() << " form is not signed.";
	return (stream);
}