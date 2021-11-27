#include "_header.hpp"

int main(void)
{
	std::string input;
	
	PhoneBook crappy_phone_book;
	crappy_phone_book.init_contact();
	while (1)
	{
		std::cout << "> : ";
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
			add_contact(&crappy_phone_book);
		else if (input.compare("SEARCH") == 0)
			search_contact(&crappy_phone_book);
		else if (input.compare("EXIT") == 0)
			break ;
		else if (input.size() > 0)
			std::cout << "(" << input << ") : command not found\n" ;
	}
	return (0);
}