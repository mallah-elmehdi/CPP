#ifndef _CAT_HPP
#define _CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	protected:
		std::string type;
		Brain *brain;
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat& object);
		std::string getType(void) const;
		void makeSound(void) const;
		void get_brain_address(void);
};

#endif