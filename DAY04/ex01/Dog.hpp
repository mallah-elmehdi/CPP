#ifndef _DOG_HPP
#define _DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		std::string type;
		Brain *brain;
	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog& object);
		std::string getType(void) const;
		void makeSound(void) const;
		void get_brain_address(void);
};

#endif