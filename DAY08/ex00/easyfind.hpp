#ifndef _EASYFIND_HPP
#define _EASYFIND_HPP

#include <iostream>

template <typename T>

typename T::iterator easyfind(T &v, int var)
{
	typename T::iterator i = std::find(v.begin(), v.end(), var);
	if (i != v.end())
		return (i);
	throw std::exception;
}

#endif