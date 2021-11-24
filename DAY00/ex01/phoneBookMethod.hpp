#ifndef _PHONEBOOKMETHOD_HPP 
#define _PHONEBOOKMETHOD_HPP

# include <iostream>
# include "phoneBookClass.hpp"

//--------------------------- Contact class

void	Contact::add_contact_first_name(std::string holder)
{
	if (holder.size() > 0)
		first_name.assign(holder);
}
void	Contact::add_contact_last_name(std::string holder)
{
	if (holder.size() > 0)
		last_name.assign(holder);
}
void	Contact::add_contact_nickname(std::string holder)
{
	if (holder.size() > 0)
		nickname.assign(holder);
}
void	Contact::add_contact_phone_number(std::string holder)
{
	if (holder.size() > 0)
		phone_number.assign(holder);
}
void	Contact::add_contact_darkest_secret(std::string holder)
{
	if (holder.size() > 0)
		darkest_secret.assign(holder);
}


std::string	Contact::search_contact_first_name(void)
{
	return (first_name);
}
std::string	Contact::search_contact_last_name(void)
{
	return (last_name);
}
std::string	Contact::search_contact_nickname(void)
{
	return (nickname);
}
std::string	Contact::search_contact_phone_number(void)
{
	return (phone_number);
}
std::string	Contact::search_contact_darkest_secret(void)
{
	return (darkest_secret);
}

//--------------------------- PhoneBook class

void	PhoneBook::init_contact(void)
{
	for (size_t i = 0; i < 8; i++)
		contacts[i] = NULL;
}

void	PhoneBook::add_contact(Contact *contact)
{
	static int i;

	if (i == 7)
		i = 0;
	//std::cout << contacts[i]->search_contact_darkest_secret();
	contacts[i] = contact;
	i++;
}

void	PhoneBook::search_contact(void)
{
	for (size_t i = 0; i < 8; i++)
	{
		std::cout << contacts[i];
		std::cout << "\n";
		if (contacts[i])
		{
			std::cout << i;
			std::cout << contacts[i]->search_contact_first_name();
			std::cout << contacts[i]->search_contact_last_name();
			std::cout << contacts[i]->search_contact_nickname();
			std::cout << "\n";

		}
	}
}

#endif