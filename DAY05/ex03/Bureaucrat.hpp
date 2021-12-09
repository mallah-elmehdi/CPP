#ifndef _BUREAUCRAT_HPP
#define _BUREAUCRAT_HPP

#include <iostream>

class Form;

class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;
	public:
		// * CONSTRUCTOR / DESTRUCTOR *
		Bureaucrat(void);
		~Bureaucrat(void);
		Bureaucrat(const Bureaucrat &object);
		Bureaucrat(const std::string name, int grade);
		// * MEMBER FUNCTION *
		// - getter
		std::string	getName(void) const;
		int			getGrade(void) const;
		// - other
		void		decrement_grade(void);
		void		increment_grade(void);
		void		signForm(const std::string message);
		void		executeForm(Form const &form);
		// * EXCEPTION SUB CLASSES *
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Bureaucrat : [ Exception thrown ] : grade is too hight");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Bureaucrat : [ Exception thrown ] : grade is too low");
				}
		};
};

// * OPERATOR OVERLOAD *
std::ostream& operator<< (std::ostream &stream, const Bureaucrat& object);

#endif
