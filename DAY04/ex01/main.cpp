#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int  main()
{
	//const Animal* animal = new Animal();
	//const Animal* dog = new Dog();
	
	
	Dog basic;
	{
		std::cout << "--------------------------" << std::endl;
		Dog tmp = basic;
		tmp.get_brain_address();
		basic.get_brain_address();
	}
	std::cout << "--------------------------" << std::endl;
	//const Animal* cat = new Cat();
	//std::cout << std::endl;
	//std::cout << animal->getType() << " " << std::endl;
	//std::cout << dog->getType() << " " << std::endl;
	//std::cout << cat->getType() << " " << std::endl;
	//animal->makeSound();
	//cat->makeSound();
	//dog->makeSound();
	//std::cout << std::endl;
	//delete animal;
	//delete dog;
	//delete cat;

}