#ifndef _FORM_HPP
#define _FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	name;
		bool				is_signed;
		const int			sign;
		const int			exec;
	public:
		// * CONSTRUCTOR / DESTRUCTOR *
		Form(void);
		Form(const Form &object);
		~Form(void);
		Form(const std::string name);
		// * MEMBER FUNCTION *
		// - getter
		std::string	getName(void) const;
		bool		getSignature(void) const;
		int			getSign(void) const;
		int			getExec(void) const;
		// - other
		void		beSigned(Bureaucrat &object);
		// * EXCEPTION SUBCLASSES *
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Form : [ Exception thrown ] : grade is too high");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Form : [ Exception thrown ] : grade is too low");
				}
		};
};

// * OPERATOR OVERLOAD *
std::ostream& operator<< (std::ostream &stream, const Form& object);

#endif
