#ifndef _PRESIDENTIALPARDONFORM_
#define _PRESIDENTIALPARDONFORM_

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		// * CONSTRUCTOR / DESTRUCTOR *
		PresidentialPardonForm(void);
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &object);
		~PresidentialPardonForm(void);
		void execute(Bureaucrat const & executor) const;
};

#endif