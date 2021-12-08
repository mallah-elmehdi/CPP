#include "Form.hpp"

int main(void)
{
	try
	{
		//error
		Bureaucrat mehdi("mehdi", 0);
		Form cdi("CDI");
		std::cout << mehdi << std::endl;
		std::cout << cdi << std::endl;
		cdi.beSigned(mehdi);
		//error
		Bureaucrat mallah("mallah", 151);
		Form certificate("Certificate");
		std::cout << mallah << std::endl;
		std::cout << certificate << std::endl;
		certificate.beSigned(mallah);
		//no error
		Bureaucrat student("student", 5);
		Form bachelor("bachelor");
		std::cout << student << std::endl;
		std::cout << bachelor << std::endl;
		bachelor.beSigned(student);
		std::cout << bachelor << std::endl;
	}
	catch(const std::exception& beruc)
	{
		std::cerr << beruc.what() << std::endl;
	}
}