#include "_header.hpp"

int	valid_phone_number(std::string phone_number)
{
	if (phone_number.size() > 14 || phone_number.size() < 10)
		return (false);
	if (phone_number[0] != '+' && !isdigit(phone_number[0]))
		return (false);
	for (size_t i = 1; phone_number[i]; i++)
	{
		if (!isdigit(phone_number[i]))
			return (false);
	}
	return (true);
}

void	add_contact(PhoneBook *crappy_phone_book)
{
	static int		i;
	
	if (i == 8)
		i = 0;
	add_first_name(crappy_phone_book, i);
	add_last_name(crappy_phone_book, i);
	add_nickname(crappy_phone_book, i);
	add_phone_number(crappy_phone_book, i);
	add_darkest_secret(crappy_phone_book, i);
	i++;
}