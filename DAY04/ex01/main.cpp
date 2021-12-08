#include "Cat.hpp"
#include "Dog.hpp"

int  main()
{
	std::cout << "***********************" << std::endl;
	{
		Brain brain1;
	}
	Brain *brain2 = new Brain();
	delete brain2;
	std::cout << "***********************" << std::endl;
	Dog dog1;
	{
		Dog copy_of_dog1 = dog1;
		copy_of_dog1.get_brain_address();
		dog1.get_brain_address();
	}
	std::cout << "***********************" << std::endl;
	Cat cat1;
	{
		Cat copy_of_cat1 = cat1;
		copy_of_cat1.get_brain_address();
		cat1.get_brain_address();
	}
}