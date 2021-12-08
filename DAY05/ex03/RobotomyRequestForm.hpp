#ifndef _ROBOTOMYREQUESTFORM_
#define _ROBOTOMYREQUESTFORM_

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		// * CONSTRUCTOR / DESTRUCTOR *
		RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &object);
		~RobotomyRequestForm(void);
		void execute(Bureaucrat const & executor) const;
};

#endif