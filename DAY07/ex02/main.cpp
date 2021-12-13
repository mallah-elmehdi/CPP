#include "Array.hpp"

int main()
{
	try
	{
		//std::cout << "* INT *" << std::endl;
		//Array<int> arrayInt;
		//std::cout << "size = " << arrayInt.size() << std::endl;
		//std::cout << "* FLOAT *" << std::endl;
		//Array<float> arrayFloat;
		//std::cout << "size = " << arrayFloat.size() << std::endl;
		//std::cout << "* CHAR *" << std::endl;
		//Array<char> arrayChar;
		//std::cout << "size = " << arrayChar.size() << std::endl;
		//std::cout << "* STRING *" << std::endl;
		//Array<std::string> arrayString;
		//std::cout << "size = " << arrayString.size() << std::endl;
		/* --------------------- */
		std::cout << "* INT *" << std::endl;
		Array<int> arrayInt(5);
		std::cout << "size = " << arrayInt.size() << std::endl;
		for (unsigned int i = 0; i < arrayInt.size(); i++)
		{
			arrayInt[i] = i;
			std::cout << arrayInt[i] << std::endl;
		}
		Array<int> const arrayIntConst(5);
		std::cout << "size = " << arrayIntConst.size() << std::endl;
		for (unsigned int i = 0; i < arrayIntConst.size(); i++)
		{
			arrayIntConst[i] = i;
			std::cout << arrayIntConst[i] << std::endl;
		}
		std::cout << "* FLOAT *" << std::endl;
		Array<float> arrayFloat(5);
		std::cout << "size = " << arrayFloat.size() << std::endl;
		for (unsigned int i = 0; i < arrayFloat.size(); i++)
		{
			arrayFloat[i] = i + (i / 3.6);
			std::cout << arrayFloat[i] << std::endl;
		}
		std::cout << "* CHAR *" << std::endl;
		Array<char> arrayChar(5);
		std::cout << "size = " << arrayChar.size() << std::endl;
		for (unsigned int i = 0; i < arrayChar.size(); i++)
		{
			arrayChar[i] = 'a' + i;
			std::cout << arrayChar[i] << std::endl;
		}
		std::cout << "* STRING *" << std::endl;
		Array<std::string> arrayString(5);
		std::cout << "size = " << arrayString.size() << std::endl;
		for (unsigned int i = 0; i < arrayString.size(); i++)
		{
			if (i % 2)
				arrayString[i] = "str1";
			else
				arrayString[i] = "str2";
			std::cout << arrayString[i] << std::endl;
		}
		std::cout << "* ERROR *" << std::endl;
		Array<double> arrayDouble(5);
		std::cout << "size = " << arrayDouble.size() << std::endl;
		for (unsigned int i = 0; i < arrayDouble.size() + 1; i++)
		{
			arrayDouble[i] = i + (i / -9.3);
			std::cout << arrayDouble[i] << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}