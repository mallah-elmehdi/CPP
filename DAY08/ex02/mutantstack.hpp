#ifndef _MUTANTSTACK_HPP 
#define _MUTANTSTACK_HPP 

#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

template <class T>

class MutantStack : public std::stack<T>
{
	public:
		typedef typename MutantStack::stack::container_type::iterator iterator;
		/* constructor */
		MutantStack(void) { /* none */ };
		MutantStack(const MutantStack&) { /* none */ };
		~MutantStack(void) { /* none */ };
		/* member function */
		iterator begin()
		{
			return(this->c.begin());
		}
		iterator end()
		{
			return(this->c.end());
		}
};





#endif