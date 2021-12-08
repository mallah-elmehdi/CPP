#ifndef _BUREAUCRAT_HPP
#define _BUREAUCRAT_HPP

#include <iostream>

class Form;

class Bureaucrat
{
	private:
		const std::string	name;
		const int			grade;
	public:
		//constructor / destructor
		Bureaucrat(void);
		~Bureaucrat(void);
		Bureaucrat(const Bureaucrat &object);
		Bureaucrat(std::string name, int grade);
		//member function
		std::string getName(void) const;
		int getGrade(void) const;
		void signForm(Form &object, std::string reason);
};

std::ostream& operator<< (std::ostream &stream, const Bureaucrat& object);

#endif
