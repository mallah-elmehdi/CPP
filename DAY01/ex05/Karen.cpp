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
	void (Karen::*f_ptr[]) (void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	std::string levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	int index = 0;
	while (index < 4 && levels[index] != level)
		index++;
	switch (index)
	{
		case 0:
			(this->*f_ptr[0])();
			break ;
		case 1:
			(this->*f_ptr[1])();
			break ;
		case 2:
			(this->*f_ptr[2])();
			break ;
		case 3:
			(this->*f_ptr[3])();
			break ;
	}
}