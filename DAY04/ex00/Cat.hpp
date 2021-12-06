#ifndef _CAT_HPP
#define _CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	protected:
		std::string type;
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat& object);
		std::string getType(void) const;
		void makeSound(void) const;
};

#endif