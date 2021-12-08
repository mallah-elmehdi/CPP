#ifndef _BRAIN_HPP
#define _BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string *ideas;
	public:
		Brain(void);
		~Brain(void);
		Brain(const Brain& object);
};

#endif