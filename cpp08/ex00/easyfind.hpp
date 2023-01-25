#ifndef EASYFIND_H
# define EASYFIND_H

# include <iostream>
# include <list>
# include <vector>
# include <map>

template< typename T >
void	easyfind(T lst, int i){
	typename T::iterator	it;
	
	it = std::find(lst.begin(), lst.end(), i);

	if (it != lst.end())
		std::cout << "occurrence found"  << std::endl;
	else
		std::cout << "occurrence not found" << std::endl;
}

#endif
