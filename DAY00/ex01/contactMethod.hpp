#include "variable.hpp"

// ------------------------------------------ INIT METHODS
void	Contact::init(void)
{
	done = 0;
}
int		Contact::get_done(void)
{
	return (done);
}
// ------------------------------------------ ADD METHODS
void	Contact::add_contact_first_name(std::string holder)
{
	if (holder.size() > 0)
	{
		first_name.assign(holder);
		done = 1;
	}
}
void	Contact::add_contact_last_name(std::string holder)
{
	if (holder.size() > 0)
	{
		last_name.assign(holder);
		done = 1;
	}
}
void	Contact::add_contact_nickname(std::string holder)
{
	if (holder.size() > 0)
	{
		nickname.assign(holder);
		done = 1;
	}
}
void	Contact::add_contact_phone_number(std::string holder)
{
	if (holder.size() > 0)
	{
		phone_number.assign(holder);
		done = 1;
	}
}
void	Contact::add_contact_darkest_secret(std::string holder)
{
	if (holder.size() > 0)
	{
		darkest_secret.assign(holder);
		done = 1;
	}
}
// ------------------------------------------ SEARCH METHODS
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
