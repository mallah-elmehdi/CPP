#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	std::cout << "\n***************************************\n";
	std::cout << "SET UP THE 1ST HUMAN (HUMAN A)";
	std::cout << "\n***************************************\n";
	Weapon wpn1;
	wpn1.setType("MK-38 25mm Gun");
	HumanA hmnA(wpn1);
	hmnA.set_name("MEHDI");
	hmnA.attack();

	//std::cout << "\n***************************************\n";
	//std::cout << "SET UP THE 2ND HUMAN (HUMAN A)";
	//std::cout << "\n***************************************\n";
	//Weapon wpn2;
	//wpn2.setType("AK-12");
	//HumanA hmnA2;
	//hmnA2.set_name("MEHDI");
	//hmnA2.attack();

	std::cout << "\n***************************************\n";
	std::cout << "SET UP THE 3RD HUMAN (HUMAN B)";
	std::cout << "\n***************************************\n";
	Weapon wpn3;
	wpn3.setType("AAI ACR");
	HumanB hmnB(&wpn3);
	hmnB.set_name("HAMZA");
	hmnB.attack();
	
	std::cout << "\n***************************************\n";
	std::cout << "SET UP THE 4TH HUMAN (HUMAN B) (NULL WEAPON)";
	std::cout << "\n***************************************\n";
	Weapon wpn4;
	wpn4.setType("AEK-971");
	HumanB hmnB2(NULL);
	hmnB2.set_name("AHMED");
	hmnB2.attack();

	std::cout << "\n***************************************\n";
	std::cout << "SET UP THE5TH HUMAN (HUMAN B) (NO WEAPON)";
	std::cout << "\n***************************************\n";
	Weapon wpn5;
	wpn5.setType("Colt ACR");
	HumanB hmnB3;
	hmnB3.set_name("MORAD");
	hmnB3.attack();
	std::cout << "\n***************************************\n\n";
}