#ifndef __HEADER_HPP
#define __HEADER_HPP

# include "PhoneBook.hpp"

int		valid_index(std::string	index);
void	show_contact_info(PhoneBook *crappy_phone_book, std::string	index);
void	search_contact(PhoneBook *crappy_phone_book);
int	    valid_phone_number(std::string phone_number);
void	add_contact(PhoneBook *crappy_phone_book);
void	add_first_name(PhoneBook *crappy_phone_book, int i);
void	add_last_name(PhoneBook *crappy_phone_book, int i);
void	add_nickname(PhoneBook *crappy_phone_book, int i);
void	add_phone_number(PhoneBook *crappy_phone_book, int i);
void	add_darkest_secret(PhoneBook *crappy_phone_book, int i);

#endif