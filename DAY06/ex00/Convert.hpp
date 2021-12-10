#ifndef _CONVERT_HPP
#define _CONVERT_HPP

#include "Error.hpp"
#include "otherFunctions.hpp"
#include <iomanip>

class Convert
{
	private:
		std::string	stringValue;
		char		charValue;
		int			intValue;
		float		floatValue;
		double		doubleValue;
	public:
		// * SETTER *
		void        setString(const std::string stringValue);
		void        setChar(char charValue);
		void        setInt(int intValue);
		void        setFloat(float floatValue);
		void        setDouble(double doubleValue);
		
		// * GETTER *
		std::string getString(void) const;
		char        getChar(void) const;
		int         getInt(void) const;
		float       getFloat(void) const;
		double      getDouble(void) const;
		
		// * OTHER MEMBER FUNCTION *
		void        checkString(void);
		void        printChar(void);
		void        printInt(void);
		void        printFloat(void);
		void        printDouble(void);
		
		// * CONSTRUCTOR *
		Convert(const std::string stringValue);
};

// * CONSTRUCTOR *
Convert::Convert(const std::string stringValue)
{
	this->stringValue = stringValue;
	this->charValue = 0;
	this->intValue = 0;
	this->floatValue = 0;
	this->doubleValue = 0;
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

// * OTHER MEMBER FUNCTIONS *

void Convert::checkString(void)
{	
	if (this->stringValue.size() == 1)
	{
		if (isdigit(this->stringValue[0]))
		{
			this->intValue = toInt(this->stringValue);
			this->charValue = static_cast<char>(this->intValue);
			this->floatValue = static_cast<float>(this->intValue);
			this->doubleValue = static_cast<double>(this->intValue);
			return;
		}
		else
		{
			this->charValue= this->stringValue[0];
			this->floatValue = static_cast<float>(this->charValue);
			this->intValue = static_cast<int>(this->charValue);
			this->doubleValue = static_cast<double>(this->charValue);
			return;
		}
	}
	if (isDigit(this->stringValue))
	{
		this->doubleValue = toDouble(this->stringValue);
		this->floatValue = static_cast<float>(this->doubleValue);
		this->intValue = static_cast<int>(this->doubleValue);
		this->charValue = static_cast<char>(this->doubleValue);
	}
	else
	{
		if (this->stringValue[this->stringValue.size() - 1] == 'f')
		{
			this->stringValue.substr(0, this->stringValue.size() - 1);
			if (isDigit(stringValue))
			{
				this->doubleValue = toDouble(this->stringValue);
				this->floatValue = static_cast<float>(this->doubleValue);
				this->intValue = static_cast<int>(this->doubleValue);
				this->charValue = static_cast<char>(this->doubleValue);
			}
			else
				throw Error::ParsingException();
		}
		else
			throw Error::ParsingException();
	}
}

void Convert::printChar(void)
{
	if (this->intValue >= 33 && this->intValue <= 126)
		std::cout << "char: " << this->charValue << std::endl;
	else
		throw Error::ParsingExceptionCharPrintable();
}

void Convert::printInt(void)
{
	// if (this->floatValue != nan)
		std::cout << "int: " << this->intValue << std::endl;
	// else
		// throw Error::ParsingExceptionInt();
}

void Convert::printFloat(void)
{
	if (this->floatValue == this->intValue)
		std::cout << "float: " << std::fixed << std::setprecision(1) << this->floatValue << "f" << std::endl;
	else
		std::cout << "float: " << this->floatValue << "f" << std::endl;
}

void Convert::printDouble(void)
{
	if (this->doubleValue == this->intValue)
		std::cout << "double: " << std::fixed << std::setprecision(1) << this->doubleValue << std::endl;
	else
		std::cout << "double: " << this->doubleValue << std::endl;
}

#endif