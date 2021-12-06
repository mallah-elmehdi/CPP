#ifndef _ANIMAL_HPP
#define _ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(const Animal& object);
		virtual std::string getType(void) const;
		virtual void makeSound(void) const;

};

#endif