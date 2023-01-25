#include "Span.hpp"

Span::Span() : size_(0)
{
	std::cout << "Constructor Span Called" << std::endl;
}

Span::Span(unsigned int N) : size_(N)
{
	std::cout << "Constructor Span Called" << std::endl;
}

Span & Span::operator=(Span const & rhs)
{
	std::cout << "Span copy assignment called" << std::endl;
	if (this != &rhs)
	{
		this->size_ = rhs.size_;
		this->lst_ = rhs.lst_;
	}
	return *this;
}

Span::Span(Span const & origin)
{
	std::cout << "Span copy constructor called" << std::endl;
	*this = origin;
}

Span::~Span()
{
	std::cout << "Destructor Span Called" << std::endl;
}

void	Span::addNumber(int N)
{
	if (this->lst_.size() == this->size_)
		throw std::exception();
	this->lst_.push_back(N);
}

void	Span::addPlage(int it)
{
	if (this->lst_.size() + it > this->size_)
		throw std::exception();
	std::srand(std::time(NULL));
	for (int i = 0; i < it; i++)
		this->lst_.insert(this->lst_.end() , rand());
}

int		Span::shortestSpan()
{
	int	min = 0;
	int max = 0;
	int ret = 0;
	std::list<int>  tmp = this->lst_;
	std::list<int>::const_iterator it;

	if (this->lst_.size() < 2)
		throw std::exception();
	tmp.sort();
	tmp.unique();
	it = tmp.begin();
	min = *it;
	it++;
	for (; it != tmp.end(); it++)
	{
		max = *it;
		if(ret == 0 || max - min < ret)
			ret = max - min;
		min = max;
	}
	return ret;
}

int		Span::longestSpan()
{
	int	min;
	int max;
	std::list<int>  tmp = this->lst_;
	std::list<int>::const_iterator it;

	if (this->lst_.size() < 2)
		throw std::exception();
	tmp.sort();
	it = tmp.begin();
	min = *it;
	it = tmp.end();
	it--;
	max = *it;
	return (max - min);
}

void	Span::print()
{
	std::list<int>::const_iterator it;
	std::list<int>::const_iterator	ite = this->lst_.end();

	for (it = this->lst_.begin(); it != ite; ++it)
		std::cout << *it << std::endl;
}
