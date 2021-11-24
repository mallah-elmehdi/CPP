#include <iostream>
#include "phoneBookClass.hpp"
#include "phoneBookMethod.hpp"

void	add_contact(PhoneBook crappy_phone_book)
{
	std::string	holder;
	Contact		contact;
	
	std::cout << "Please enter your first name: ";	
	std::cin >> holder;
	contact.add_contact_first_name(holder);
	std::cout << "Please enter your last name: ";	
	std::cin >> holder;
	contact.add_contact_last_name(holder);
	std::cout << "Please enter your nikename: ";	
	std::cin >> holder;
	contact.add_contact_nickname(holder);
	std::cout << "Please enter your phone number: ";	
	std::cin >> holder;
	contact.add_contact_phone_number(holder);
	std::cout << "Please enter your darkest secret: ";	
	std::cin >> holder;
	contact.add_contact_darkest_secret(holder);
	crappy_phone_book.add_contact(&contact);
}

int main(void)
{
	std::string input;
	
	PhoneBook crappy_phone_book;
	crappy_phone_book.init_contact();
	while (1)
	{
		std::cout << "> : ";
		std::cin >> input;
		if (input.compare("ADD") == 0)
			add_contact(crappy_phone_book);
		else if (input.compare("SEARCH") == 0)
			crappy_phone_book.search_contact();
		else if (input.compare("EXIT") == 0)
			break ;
	}
	return (0);
}