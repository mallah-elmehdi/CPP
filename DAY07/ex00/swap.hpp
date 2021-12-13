#ifndef _SWAP_HPP
#define _SWAP_HPP

template <typename type>
void swap(type &x, type &y)
{
	type temp = x;
	x = y;
	y = temp;
}

#endif
