#ifndef _PHONEBOOK_HPP
#define _PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts[8];
	public:
		void	init_contact(void);
		void	add_contact_first_name(std::string holder, int i);
		void	add_contact_last_name(std::string holder, int i);
		void	add_contact_nickname(std::string holder, int i);
		void	add_contact_phone_number(std::string holder, int i);
		void	add_contact_darkest_secret(std::string holder, int i);
		void	search_contact(void);
		void	show_one_contact(int i);
};

#endif