#include "span.hpp"

int main(void)
{
	try
	{
		/* subject example */
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		/* example 1 */
		Span sp1 = Span(10);
		for (int i = 0; i < 10; i++)
		{
			sp1.addNumber(i);
		}
		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
		/* example 2 */
		Span sp2 = Span(10000);
		for (int i = 0; i < 10000; i++)
		{
			sp2.addNumber(std::rand());
		}
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
		/* error */
		//Span error = Span(0);
		//error.addNumber(3);
		//Span error = Span(3);
		//error.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << "{ Exception thrown }" << '\n';
	}
	
	return 0;
}
