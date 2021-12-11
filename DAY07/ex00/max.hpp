#ifndef _MAX_HPP
#define _MAX_HPP

template <typename T>
T max(T x, T y)
{
	return (y >= x) ? y : x;
}

#endif
