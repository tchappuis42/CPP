#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <list>
# include <cstdlib>
# include <ctime>

class Span
{
	private:
		unsigned int	size_;
		std::list<int>  lst_;
	public:
		Span();
		Span(unsigned int N);
		Span(Span const & origin);
		Span & operator=(Span const & rhs);
		~Span();

		void	addNumber(int N);
		void	addPlage(int it);
		int		shortestSpan();
		int		longestSpan();

		void	print();


};

#endif