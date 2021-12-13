#ifndef _ITER_HPP
#define _ITER_HPP
#include <iostream>

template <typename type>

void iter(type *array, int length, void(*function)(const type &))
{
	for (int i = 0; i < length; i++)
	{
		function(array[i]);
	}
}

#endif
