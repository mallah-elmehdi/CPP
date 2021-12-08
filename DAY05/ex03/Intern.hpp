#ifndef _INTERN_CPP
#define _INTERN_CPP

#include "Form.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(const Intern &object);
		~Intern();
		Form *makeForm(std::string name, std::string target);

};

#endif