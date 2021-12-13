#ifndef _MIN_HPP
#define _MIN_HPP

template <typename type>
type min(type x, type y)
{
	return (y <= x) ? y : x;
}

#endif
