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
		// * CONSTRUCTOR / DESTRUCTOR *
		Bureaucrat(void);
		~Bureaucrat(void);
		Bureaucrat(const Bureaucrat &object);
		Bureaucrat(std::string name, int grade);
		// * MEMBER FUNCTION *
		// - getter
		std::string	getName(void) const;
		int			getGrade(void) const;
		// - other
		void		signForm(Form &object, std::string reason);
		void		executeForm(Form const &form);
};

std::ostream& operator<< (std::ostream &stream, const Bureaucrat& object);

#endif
