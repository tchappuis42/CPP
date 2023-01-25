#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <stack>
# include <iostream>

template< typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack<T>(){std::cout << "Constructor MutantStack Called" << std::endl;}
		MutantStack<T>(MutantStack<T> const & origin){*this = origin;}
		MutantStack<T> & operator=(MutantStack<T> const & rhs){
			this->c = rhs.c;
			return *this;
		}
		~MutantStack<T>(){std::cout << "Destructor MutantStack Called" << std::endl;}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin(){return this->c.begin();}
		iterator end(){return this->c.end();}
};

#endif