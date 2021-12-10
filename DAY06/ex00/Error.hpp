#ifndef _ERROR_HPP
#define _ERROR_HPP

#include <iostream>

class Error
{
	public:
		// * ARGUMENT *
		class ArgumentException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Argument Error");
				}
		};
		// * PARSING *
		class ParsingException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Parsing Error");
				}
		};
		class ParsingExceptionChar : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("char: imposible");
				}
		};
		class ParsingExceptionCharPrintable : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("char: Non displayable");
				}
		};
		class ParsingExceptionInt : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("int: imposible");
				}
		};
		class ParsingExceptionFloat : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("float: imposible");
				}
		};
		class ParsingExceptionDouble : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("double: imposible");
				}
		};
};

#endif