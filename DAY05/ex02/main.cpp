#include "Form.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat beru("mehdi", 150);
		PresidentialPardonForm test("target11");
		test.beSigned(beru);
		beru.executeForm(test);
		std::cout << " *************** " << std::endl;
		std::cout << test << std::endl;
	}
	catch(const std::exception& beruc)
	{
		std::cerr << beruc.what() << std::endl;
	}
}