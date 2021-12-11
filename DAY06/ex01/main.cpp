#include "Data.hpp"

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}


int main(void)
{
	// **
	Data *data = new Data();
	std::cout << data->getData() << std::endl;
	// **
	uintptr_t raw = serialize(data);
	std::cout << raw << std::endl;
	// **
	Data *castData = deserialize(raw);
	std::cout << castData->getData() << std::endl;
	// **
}