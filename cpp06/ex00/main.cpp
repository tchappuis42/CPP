#include "convert.hpp"

int main (int ac, char **av)
{
	std::string	literal;
	if (ac == 2)
	{
		literal = av[1];
		get_type(literal, av[1]);
	}
	else
		std::cout << "invalid args" << std::endl;
}