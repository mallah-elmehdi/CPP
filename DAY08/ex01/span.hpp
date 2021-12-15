#ifndef _SPAN_HPP 
#define _SPAN_HPP 

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:
		std::vector<int> digits;
		std::vector<int>::iterator i;
	public:
		/* constructor */
		Span(unsigned int);
		/* constructor */
		Span(void);
		Span(const Span&);
		~Span(void);
		/* member function */
		void addNumber(int);
		int shortestSpan(void);
		int longestSpan(void);
};


#endif