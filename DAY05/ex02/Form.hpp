#ifndef _FORM_HPP
#define _FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	private:
		std::string	name;
		bool		is_signed;
		
		std::string	target;
		int			sign;
		int			exec;

	public:
		// * CONSTRUCTOR / DESTRUCTOR *
		Form(void);
		Form(const Form &object);
		~Form(void);
		Form(std::string name);
		// * MEMBER FUNCTION *
		// - setter
		void		setName(const std::string &name);
		void		setTarget(const std::string &target);
		void		setSign(int sign);
		void		setExec(int exec);
		// - getter
		std::string	getTarget(void) const;
		std::string getName(void) const;
		int			getSign(void) const;
		int			getExec(void) const;
		bool		getSignature(void) const;
		// - other
		//virtual void this_is_an_abstract_class(void) = 0;
		void		beSigned(Bureaucrat &object);
		void		execute(Bureaucrat const & executor) const;
		//exception subclasses
		class		GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("[ Exception thrown ] : grade is too high");
				}
		};
		class		GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("[ Exception thrown ] : grade is too low");
				}
		};
		class		FormNotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("[ Exception thrown ] : form not signed");
				}
		};
};

//operator overload
std::ostream& operator<< (std::ostream &stream, const Form& object);

#endif
