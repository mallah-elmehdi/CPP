#include "_header.hpp"

int		valid_index(std::string	index)
{
	for (size_t i = 0; index[i]; i++)
	{
		if (!isdigit(index[i]))
			return (false);
	}
	return (true);
}
void	show_contact_info(PhoneBook *crappy_phone_book, std::string	index)
{
	int i;

	i = std::stoi(index);
	if (i < 0 || i > 7)
		std::cout << "please enter a valid index [0,8]\n";
	else
		crappy_phone_book->show_one_contact(i);
}

void	search_contact(PhoneBook *crappy_phone_book)
{
	std::string	index;

	crappy_phone_book->search_contact();
	while (1)
	{
		std::cout << "(SEARCH) > : ";
		std::cin >> index;
		if (valid_index(index))
			show_contact_info(crappy_phone_book, index);
		else
			break ;
	}
}
