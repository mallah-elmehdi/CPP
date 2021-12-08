#include "Form.hpp"

// * CONSTRUCTOR / DESTRUCTOR *
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

// * MEMBER FUNCTION *
// - setter
void Form::setTarget(const std::string &target)
{
	this->target = target;
}
void Form::setName(const std::string &name)
{
	this->name = name;
}

void Form::setSign(int sign)
{
	this->sign = sign;
}

void Form::setExec(int exec)
{
	this->exec = exec;
}

// - getter
std::string Form::getName(void) const
{
	return (this->name);
}

std::string Form::getTarget(void) const
{
	return (this->target);
}

bool Form::getSignature(void) const
{
	return (this->is_signed);
}

int Form::getSign(void) const
{
	return(sign);
}

int Form::getExec(void) const
{
	return(exec);
}

// - other
void Form::beSigned(Bureaucrat &object)
{
	if (object.getGrade() < 1)
		throw Form::GradeTooHighException();
	else if (object.getGrade() > 150 || object.getGrade() > this->sign)
		throw Form::GradeTooLowException();
	this->is_signed = true;
}

void Form::execute(Bureaucrat const & executor) const
{
	if (this->is_signed)
	{
		if (executor.getGrade() <= this->exec && executor.getGrade() <= 1)
		{
			//execute
		}
		else if (executor.getGrade() > 150)
			throw GradeTooLowException();
		else
			throw GradeTooHighException();
	}
	else
		throw FormNotSignedException();
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