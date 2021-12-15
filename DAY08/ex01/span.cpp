#include "span.hpp"

Span::Span(unsigned int N)
{
	this->digits.resize(N);
	this->i = this->digits.begin();
}

void Span::addNumber(int add)
{
	if (this->i != this->digits.end())
	{
		*this->i = add;
		this->i++;
	}
	else
		throw std::exception();
}
int Span::shortestSpan(void)
{
	if (std::distance(this->digits.begin(), this->i) <= 1)
		throw std::exception();
	std::sort(this->digits.begin(), this->i);
	return (*(this->digits.begin() + 1) - *this->digits.begin());
}

int Span::longestSpan(void)
{
	if (std::distance(this->digits.begin(), this->i) <= 1)
		throw std::exception();
	std::sort(this->digits.begin(), this->i);
	return (*(this->i - 1) - *this->digits.begin());
}

Span::Span(void){}
Span::Span(const Span& copy){(void)copy;}
Span::~Span(void){}