#ifndef _WRONGCAT_HPP
#define _WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		std::string type;
	public:
		WrongCat(void);
		~WrongCat(void);
		WrongCat(const WrongCat& object);
		std::string getType(void) const;
		void makeSound(void) const;
};

#endif