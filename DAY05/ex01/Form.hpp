#ifndef _FORM_HPP
#define _FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string name;
		bool is_signed;
	public:
		Form(std::string name);
		~Form(void);
		std::string getName(void) const;
		bool getSignature(void) const;
		void beSigned(Bureaucrat &object);
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("[ Exception thrown ] : grade is too high");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("[ Exception thrown ] : grade is too low");
				}
		};
};

std::ostream& operator<< (std::ostream &stream, const Form& object);

#endif
