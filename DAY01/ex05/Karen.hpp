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

int	condition_debug(std::string str);
int	condition_info(std::string str);
int	condition_warning(std::string str);
int	condition_error(std::string str);

#endif