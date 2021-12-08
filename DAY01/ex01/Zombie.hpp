#ifndef _ZOMBIE_HPP
#define _ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(void);
		Zombie(std::string added_name);
		void	announce(void);
		void	set_name(std::string added_name);
		~Zombie();
};

// -----
Zombie* zombieHorde(int N, std::string name);
// -----

#endif