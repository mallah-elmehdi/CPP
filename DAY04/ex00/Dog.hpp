#ifndef _DOG_HPP
#define _DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	protected:
		std::string type;
	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog& object);
		std::string getType(void) const;
		void makeSound(void) const;
};

#endif