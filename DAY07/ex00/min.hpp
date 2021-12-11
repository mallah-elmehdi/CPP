#ifndef _MIN_HPP
#define _MIN_HPP

template <typename T>
T min(T x, T y)
{
	return (y <= x) ? y : x;
}

#endif
