#ifndef _BUREAUCRAT_HPP
#define _BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat(std::string name, int grade);
		std::string getName(void) const;
		int getGrade(void) const;
		void decrement_grade(void);
		void increment_grade(void);
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("grade is too hight");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("grade is too low");
				}
		};
};

#endif
