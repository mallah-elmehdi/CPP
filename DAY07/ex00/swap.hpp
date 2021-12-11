#ifndef _SWAP_HPP
#define _SWAP_HPP

template <typename T>
void swap(T *x, T *y)
{
	T temp = *x;
	*x = *y;
	*y = temp;
}

#endif
