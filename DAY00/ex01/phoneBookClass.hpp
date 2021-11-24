#ifndef _PHONEBOOKCLASS_HPP 
#define _PHONEBOOKCLASS_HPP

#include <iostream>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
		void	add_contact_first_name(std::string holder);
		void	add_contact_last_name(std::string holder);
		void	add_contact_nickname(std::string holder);
		void	add_contact_phone_number(std::string holder);
		void	add_contact_darkest_secret(std::string holder);
		//---------------------------------------------------
		std::string search_contact_first_name(void);
		std::string search_contact_last_name(void);
		std::string search_contact_nickname(void);
		std::string search_contact_phone_number(void);
		std::string search_contact_darkest_secret(void);
};

class PhoneBook
{
	private:
		Contact	*contacts[8];
	public:
		void	init_contact(void);
		void	add_contact(Contact *contact);
		void	search_contact(void);

};

#endif