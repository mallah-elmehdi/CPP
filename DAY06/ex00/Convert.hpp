#ifndef _CONVERT_HPP
#define _CONVERT_HPP

#include "Error.hpp"
#include <iomanip>
#include <sstream>

class Convert
{
	private:
		std::string	stringValue;
		std::string	*list;
		char		charValue;
		int			intValue;
		float		floatValue;
		double		doubleValue;
	public:

		// * MEMBER FUNCTION *
		void        checkString(void);
		void        printChar(void);
		void        printInt(void);
		void        printFloat(void);
		void        printDouble(void);
		
		// * CONSTRUCTOR *
		Convert(void);
		~Convert(void);
		Convert(const Convert &copy);
		Convert(const std::string stringValue);
};

bool	isDigit(std::string stringValue);
double	toDouble(std::string stringValue);
int		toInt(std::string stringValue);
bool	find(std::string *stringList, std::string stringValue);
bool	check(std::string stringValue);

#endif