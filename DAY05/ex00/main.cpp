#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		//error
		Bureaucrat beruc_high("beruc 1", 0);
		std::cout << beruc_high << std::endl;;
		//error
		Bureaucrat beruc_low("beruc 2", 151);
		std::cout << beruc_low << std::endl;;
		//no error inc
		Bureaucrat beruc_no_err_inc("beruc 3", 2);
		std::cout << beruc_no_err_inc << std::endl;;
		beruc_no_err_inc.increment_grade();
		std::cout << beruc_no_err_inc << std::endl;
		beruc_no_err_inc.increment_grade();
		//ne error dec
		Bureaucrat beruc_no_err_dec("beruc 4", 149);
		std::cout << beruc_no_err_dec << std::endl;
		beruc_no_err_dec.decrement_grade();
		std::cout << beruc_no_err_dec << std::endl;
		beruc_no_err_dec.decrement_grade();
	}
	catch(const std::exception& beruc)
	{
		std::cerr << beruc.what() << std::endl;
	}
}