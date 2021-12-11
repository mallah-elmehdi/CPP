#include "Convert.hpp"

// * CONSTRUCTOR *

Convert::Convert(void)
{
	// * NOTHING *
}

Convert::Convert(const Convert &copy)
{
	(void)copy;
	// * NOTHING *
}

Convert::~Convert()
{
	// * NOTHING *
}

Convert::Convert(const std::string stringValue)
{
	std::string list[12] = 
	{
		"nan",
		"+nan",
		"-nan",
		"nanf",
		"+nanf",
		"-nanf",
		"inf",
		"+inf",
		"-inf",
		"inff",
		"+inff",
		"-inff"
	};
	this->stringValue = stringValue;
	this->charValue = 0;
	this->intValue = 0;
	this->floatValue = 0;
	this->doubleValue = 0;
	this->list = new std::string[12];
	for (size_t i = 0; i < 12; i++)
	{
		this->list[i] = list[i];
	}
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

			this->stringValue = this->stringValue.substr(0, this->stringValue.size() - 1);
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
	if (find(this->list, this->stringValue))
		throw Error::ParsingExceptionChar();
	else if (this->intValue >= 32 && this->intValue <= 126)
		std::cout << "char: '" << this->charValue << "'" << std::endl;
	else
		throw Error::ParsingExceptionCharPrintable();
}

void Convert::printInt(void)
{
	if (find(this->list, this->stringValue))
		throw Error::ParsingExceptionInt();
	else
		std::cout << "int: " << this->intValue << std::endl;
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