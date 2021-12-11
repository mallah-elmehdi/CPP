#include "Data.hpp"

Data::Data(void)
{
	this->someData = 1337.42;
}

Data::~Data()
{
	// * NOTHING *
}

Data::Data(const Data &copy)
{
	(void)copy;
	// * NOTHING *
}

double Data::getData(void) const
{
	return (this->someData);
}