#include "_header.hpp"

int main(void)
{
	std::string input;
	
	PhoneBook crappy_phone_book;
	crappy_phone_book.init_contact();
	std::cout << "\n**************************************\n";
	std::cout << "*  WELCOME to the Awesome PhoneBook  *\n";
	std::cout << "**************************************\n\n";
	while (1)
	{
		std::cout << "Enter Command [ADD,SEARCH or EXIT] > : ";
		std::getline(std::cin, input);
		if(std::cin.eof())
			break ;
		if (input.size() == 0)
			continue ;
		input = trim_string(input);
		if (input.compare("ADD") == 0)
			add_contact(&crappy_phone_book);
		else if (input.compare("SEARCH") == 0)
			search_contact(&crappy_phone_book);
		else if (input.compare("EXIT") == 0)
			break ;
		else if (input.size() > 0)
			std::cout << "(" << input << ") : command not allowed\n" ;
	}
	return (0);
}