#ifndef _BUREAUCRAT_HPP
#define _BUREAUCRAT_HPP

#include <iostream>

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
		//member function
		std::string	getName(void) const;
		int			getGrade(void) const;
		void		decrement_grade(void);
		void		increment_grade(void);
		// * EXCEPTION SUB CLASSES *
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("[ Exception thrown ] : grade is too hight");
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

//operator overload
std::ostream& operator<< (std::ostream &stream, const Bureaucrat& object);

#endif
