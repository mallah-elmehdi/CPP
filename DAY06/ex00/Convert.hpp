#ifndef _CONVERT_HPP
#define _CONVERT_HPP

#include <iostream>

class Convert
{
	private:
		std::string	stringValue;
		char		charValue;
		int			intValue;
		float		floatValue;
		double		doubleValue;
	public:
		void setString(const std::string stringValue);
		void setChar(char charValue);
		void setInt(int intValue);
		void setFloat(float floatValue);
		void setDouble(double doubleValue);
		std::string getString(void) const;
		char getChar(void) const;
		int getInt(void) const;
		float getFloat(void) const;
		double getDouble(void) const;
		Convert(void);
		Convert(const std::string stringValue);
		Convert(const Convert &copy);
		~Convert(void);
		// * *
		// * EXCEPTION SUB CLASSES *
		class ArgumentException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Argument Error");
				}
		};
		class ParsingException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Imposible");
				}
		};
		
};

Convert::Convert(void)
{
	this->stringValue = "NaN";
	this->charValue = 0;
	this->intValue = 0;
	this->floatValue = 0;
	this->doubleValue = 0;
}

Convert::Convert(const std::string stringValue)
{
	this->stringValue = stringValue;
	this->charValue = 0;
	this->intValue = 0;
	this->floatValue = 0;
	this->doubleValue = 0;
}

Convert::Convert(const Convert &copy)
{
	this->stringValue = copy.getString();
	this->charValue = copy.getChar();
	this->intValue = copy.getInt();
	this->floatValue = copy.getFloat();
	this->doubleValue = copy.getDouble();
}

Convert::~Convert(void) 
{ 
	// * NOTHING * 
}

// * GETTER *

std::string Convert::getString(void) const
{
	return (this->stringValue);
}
char Convert::getChar(void) const
{
	return (this->charValue);
}
int Convert::getInt(void) const
{
	return (this->intValue);
}
float Convert::getFloat(void) const
{
	return (this->floatValue);
}
double Convert::getDouble(void) const
{
	return (this->doubleValue);
}

// * SETTER *

void Convert::setString(const std::string stringValue)
{
	this->stringValue = stringValue;
}

void Convert::setChar(char charValue)
{
	this->charValue = charValue;
}

void Convert::setInt(int intValue)
{
	this->intValue = intValue;
}

void Convert::setFloat(float floatValue)
{
	this->floatValue = floatValue;
}

void Convert::setDouble(double doubleValue)
{
	this->doubleValue = doubleValue;
}

#endif