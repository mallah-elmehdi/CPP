#include "Karen.hpp"

void Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	void (Karen::*debug_ptr) (void) = &Karen::debug;
	void (Karen::*info_ptr) (void) = &Karen::info;
	void (Karen::*warning_ptr) (void) = &Karen::warning;
	void (Karen::*error_ptr) (void) = &Karen::error;
	
	switch (conditions(level))
	{
		case 1:
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*debug_ptr)();
		case 2:
			std::cout << "[ INFO ]" << std::endl;
			(this->*info_ptr)();
		case 3:
			std::cout << "[ WARNING ]" << std::endl;
			(this->*warning_ptr)();
		case 4:
			std::cout << "[ ERROR ]" << std::endl;
			(this->*error_ptr)();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}