#ifndef _WRONGANIMAL_HPP
#define _WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	private:
		std::string type;
	public:
		WrongAnimal(void);
		~WrongAnimal(void);
		WrongAnimal(const WrongAnimal& object);
		std::string getType(void) const;
		void makeSound(void) const;
};

#endif