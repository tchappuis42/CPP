#include "Serialization.hpp"

int	main()
{
	t_data src;
	uintptr_t test;
	t_data *dest;

	src.nb = 42;
	src.f = 42.42;
	src.dofus = 424242424242.4242424242;

	std::cout << src.nb << std::endl;
	std::cout << src.f << std::endl;
	std::cout << src.dofus << std::endl;

	test = serialize(&src);
	dest = deserialize(test);

	std::cout << dest->nb << std::endl;
	std::cout << dest->f << std::endl;
	std::cout << dest->dofus << std::endl;

}