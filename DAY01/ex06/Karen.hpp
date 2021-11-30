#ifndef _KAREN_HPP
#define _KAREN_HPP

#include <iostream>

class Karen
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		void complain(std::string level);
};

int	conditions(std::string str);

#endif