#ifndef _ARRAY_HPP_
#define _ARRAY_HPP_

#include <iostream>

template <class type>

class Array
{
	private:
		type *data;
		unsigned int theSize;
	public:
		/* constructor and destructor */
		Array(void)
		{
			//std::cout << "default constructor \n";
			this->data = NULL;
			this->theSize = 0;
		}
		Array(unsigned int n)
		{
			//std::cout << "unsigned int n constructor \n";
			this->theSize = n;
			this->data = new type[n];
		}
		Array(const Array &copy)
		{
			//std::cout << "copy constructor \n";
			this->data = new type[copy.size()];
			this->theSize = copy.size();
		}
		~Array(void)
		{
			//std::cout << "destructor \n";
			delete [] this->data;
		}
		/* member function */
		unsigned int size(void) const
		{
			return (this->theSize);
		}
		/* operator overload */
		Array &operator=(const Array &copy)
		{
			//std::cout << "copy constructor \n";
			this->data = new type[copy.size()];
			return (*this);
		}
		type &operator[](const unsigned int index) const
		{
			//std::cout << "operator[] \n";
			if (index >= this->theSize)
				throw Array::OutArrayException();
			return (this->data[index]);
		}
		/* exception */
		class OutArrayException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("[ Exception thrown ] : please provide a valid index");
				}
		};
};

#endif