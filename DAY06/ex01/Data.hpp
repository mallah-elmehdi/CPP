#ifndef _DATA_HPP
#define _DATA_HPP

#include <iostream>

class Data
{
private:
	double someData;
public:
	double getData(void) const;
	Data(void);
	Data(const Data &copy);
	~Data();
};

#endif