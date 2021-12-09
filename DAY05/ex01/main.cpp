#include "Form.hpp"

int main(void)
{
	try
	{
		// * GETTERS *
		Form jobPermit("Teacher contract");
		std::cout << jobPermit.getName() << std::endl;
		std::cout << jobPermit.getExec() << std::endl;
		std::cout << jobPermit.getSign() << std::endl;
		std::cout << jobPermit << std::endl;
		// * SIGN FORM *
		Form houseAllowance("Allowance contract");
		Bureaucrat client1("Mehdi", 20);
		houseAllowance.beSigned(client1);
		std::cout << houseAllowance << std::endl;
		// * CAN'T SIGN FORM *
		Form schoolScholarship("Scholarship");
		Bureaucrat student("Student", 100);
		schoolScholarship.beSigned(student);
		std::cout << schoolScholarship << std::endl;
	}
	catch(const std::exception& beruc)
	{
		std::cerr << beruc.what() << std::endl;
	}
}