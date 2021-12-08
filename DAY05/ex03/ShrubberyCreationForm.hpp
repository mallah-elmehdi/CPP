#ifndef _SHRUBBERYCREATIONFORM_
#define _SHRUBBERYCREATIONFORM_

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		// * CONSTRUCTOR / DESTRUCTOR *
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &object);
		~ShrubberyCreationForm(void);
		void execute(Bureaucrat const & executor) const;
};

#endif