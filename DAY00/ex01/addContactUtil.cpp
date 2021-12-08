#include "_header.hpp"

void	add_first_name(PhoneBook *crappy_phone_book, int i)
{
	std::string 	holder;

	while (1)
	{
		std::cout << "Please enter your first name: ";	
		std::getline(std::cin, holder);
		if (holder.size() > 0)
			break ;
		else
			std::cout << "Error! please try again\n";
	}
	crappy_phone_book->add_contact_first_name(holder, i);
}

void	add_last_name(PhoneBook *crappy_phone_book, int i)
{
	std::string 	holder;

	while (1)
	{
		std::cout << "Please enter your last name: ";	
		std::getline(std::cin, holder);
		if (holder.size() > 0)
			break ;
		else
			std::cout << "Error! please try again\n";
	}
	crappy_phone_book->add_contact_last_name(holder, i);
}

void	add_nickname(PhoneBook *crappy_phone_book, int i)
{
	std::string 	holder;

	while (1)
	{
		std::cout << "Please enter your nikename: ";	
		std::getline(std::cin, holder);
		if (holder.size() > 0)
			break ;
		else
			std::cout << "Error! please try again\n";
	}
	crappy_phone_book->add_contact_nickname(holder, i);
}

void	add_phone_number(PhoneBook *crappy_phone_book, int i)
{
	std::string 	holder;

	while (1)
	{
		std::cout << "Please enter your phone number: ";	
		std::getline(std::cin, holder);
		if (holder.size() > 0 && valid_phone_number(holder))
			break ;
		else
			std::cout << "Error! please try again\n";
	}
	crappy_phone_book->add_contact_phone_number(holder, i);
}

void	add_darkest_secret(PhoneBook *crappy_phone_book, int i)
{
	std::string 	holder;

	while (1)
	{
		std::cout << "Please enter your darkest secret: ";	
		std::getline(std::cin, holder);
		if (holder.size() > 0)
			break ;
		else
			std::cout << "Error! please try again\n";
	}
	crappy_phone_book->add_contact_darkest_secret(holder, i);
}
