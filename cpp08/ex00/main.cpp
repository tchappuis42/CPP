#include "easyfind.hpp"

int main()
{
	std::list<int>	lst;
	std::vector<int> lsts;

	for (size_t i = 0; i < 10; i++)
		lst.push_back(i);
	for (size_t i = 0; i < 10; i++)
		lsts.push_back(i);
	::easyfind(lst, 7);
	::easyfind(lsts, 7);
	::easyfind(lsts, 11);
}
