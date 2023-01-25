#include "Span.hpp"

int main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return 0;
}

// int main()
// {
// 	Span sp = Span(10000);

// 	sp.addPlage(10000);

// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;

// 	return 0;
// }

// int main()
// {
// 	try
// 	{
// 		Span sp = Span(5);

// 		sp.addNumber(6);
// 		sp.addNumber(3);
// 		sp.addNumber(17);
// 		sp.addNumber(9);
// 		sp.addNumber(11);
// 		sp.addNumber(42);

// 		std::cout << sp.shortestSpan() << std::endl;
// 		std::cout << sp.longestSpan() << std::endl;

// 		return 0;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// }

// int main()
// {
// 	try
// 	{
// 		Span sp = Span(5);

// 		sp.addNumber(6);

// 		std::cout << sp.shortestSpan() << std::endl;
// 		std::cout << sp.longestSpan() << std::endl;

// 		return 0;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// }
