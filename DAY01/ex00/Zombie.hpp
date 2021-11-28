#ifndef _ZOMBIE_HPP
#define _ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string added_name)
		{
			name = added_name;
		};
		void	announce(void);
		~Zombie()
		{
			std::cout << "The instance of the Zombie " << name << " has been detroyed\n";
		};
};

// -----
Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
// -----

#endif