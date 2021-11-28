#include "_header.hpp"

int		valid_index(std::string	index)
{
	if (index.size() > 1)
		return (false);
	if (!isdigit(index[0]))
		return (false);
	return (true);
}
int	show_contact_info(PhoneBook *crappy_phone_book, std::string	index)
{
	int i;

	i = index[0] - 48;
	if (i < 0 || i > 7)
	{
		std::cout << "please enter a valid index [0,7]\n";
		return (false);
	}
	crappy_phone_book->show_one_contact(i);
	return (true);
}

void	search_contact(PhoneBook *crappy_phone_book)
{
	std::string	index;

	crappy_phone_book->search_contact();
	while (1)
	{
		std::cout << "(SEARCH) > : ";
		std::getline(std::cin, index);
		if(std::cin.eof())
			break ;
		if (index.size() == 0)
			continue ;
		index = trim_string(index);
		if (valid_index(index))
		{
			if (show_contact_info(crappy_phone_book, index))
				break ;
		}
		else
			std::cout << "please enter a valid index [0,7]\n" ;
	}
}
