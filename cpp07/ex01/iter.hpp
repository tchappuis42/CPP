#ifndef ITER_H
# define ITER_H

# include <iostream>
# include <string>

template< typename T >
void iter(T *ptr, int size, void f(T const &)){
	if (ptr == NULL)
		return ;
	for (int i = 0; i < size; i++)
	{
		f(ptr[i]);
	}
}

template< typename T >
void print (T const &print){
	std::cout << print << std::endl;
}

#endif
