#ifndef _PHONEBOOKMETHOD_HPP 
#define _PHONEBOOKMETHOD_HPP

# include "variable.hpp"

// ----------------------------------------------- INIT METHOD
void	PhoneBook::init_contact(void)
{
	for (size_t i = 0; i < 8; i++)
		contacts[i].init();
}
// ----------------------------------------------- ADD METHOD
void	PhoneBook::add_contact_first_name(std::string holder, int i)
{
	contacts[i].add_contact_first_name(holder);
}
void	PhoneBook::add_contact_last_name(std::string holder, int i)
{
	contacts[i].add_contact_last_name(holder);
}
void	PhoneBook::add_contact_nickname(std::string holder, int i)
{
	contacts[i].add_contact_nickname(holder);
}
void	PhoneBook::add_contact_phone_number(std::string holder, int i)
{
	contacts[i].add_contact_phone_number(holder);
}
void	PhoneBook::add_contact_darkest_secret(std::string holder, int i)
{
	contacts[i].add_contact_darkest_secret(holder);
}
// ----------------------------------------------- SEARCH METHOD
void	print_result(std::string holder)
{
	if (holder.size() > 10)
		std::cout << holder.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << holder;
}
void	PhoneBook::search_contact(void)
{

	for (size_t i = 0; i < 8; i++)
	{
		if (contacts[i].get_done())
		{
			std::cout << std::setw(10) << i;
			std::cout << "|";
			print_result(contacts[i].search_contact_first_name());
			std::cout << "|";
			print_result(contacts[i].search_contact_last_name());
			std::cout << "|";
			print_result(contacts[i].search_contact_nickname());
			std::cout << "\n";
		}
	}
}
void	PhoneBook::show_one_contact(int i)
{
	if (contacts[i].get_done())
	{
		std::cout << "Index : " << i << ".\n";
		std::cout << "First Nmae : " << contacts[i].search_contact_first_name() << ".\n";
		std::cout << "Last Nmae : " << contacts[i].search_contact_last_name() << ".\n";
		std::cout << "Nickname : " << contacts[i].search_contact_nickname() << ".\n";
		std::cout << "Phone Number : " << contacts[i].search_contact_phone_number() << ".\n";
		std::cout << "Darkest Sucret: " << contacts[i].search_contact_darkest_secret() << ".\n";
	}
	else
		std::cout << "No Contact in this index\n";

}

#endif