#include "convert.hpp"

bool	is_char(std::string literal)
{
	if (literal.length() > 1)
		return (false);
	if (literal[0] < '0' || literal[0] > '9')
		return (true);
	return (false);
}

bool	is_int(std::string literal)
{
	size_t	i = 0;

	if (literal[0] == '-')
		i++;
	for (; i < literal.length(); i++)
	{
		if (literal[i] < '0' || literal[i] > '9')
			return (false);
	}
	if (literal.length() > 11)
		return (false);
	if (literal.length() == 10 && literal > "2147483647")
		return (false);
	if (literal.length() == 11 && literal > "-2147483648")
		return (false);
	return (true);
}

bool	is_float(std::string literal)
{
	size_t i = 0;
	int point = 0;

	if (literal[literal.length() - 1] != 'f')
		return (false);
	if (literal == "-inff" || literal == "+inff" || literal == "nanf")
		return (true);
	if (literal[0] == '-' && literal[1] != '.')
		i++;
	for (; i < literal.length() - 1; i++)
	{
		if (literal[i] == '.' && i != 0)
			point++;
		else if (literal[i] < '0' || literal[i] > '9')
			return (false);
	}
	if (point < 2)
		return (true);
	return (false);
}

bool	is_double(std::string literal)
{
	size_t i = 0;
	int point = 0;

	if (literal == "-inf" || literal == "+inf" || literal == "nan")
		return (true);
	if (literal[0] == '-' && literal[1] != '.')
		i++;
	for (; i < literal.length(); i++)
	{
		if (literal[i] == '.' && i != 0)
			point++;
		else if (literal[i] < '0' || literal[i] > '9')
			return (false);
	}
	if (point < 2)
		return (true);
	return (false);
}

void	get_type(std::string literal, char *av)
{
	int i;
	ft_array	ft[4] = {is_char,  is_int, is_float, is_double};

	for  (i = 0; i < 4; i++)
	{
		if (ft[i](literal))
			break;
	}
	switch (i)
	{
	case 0:{
		printChar(av);
		break;
	}
	case 1:{
		printint(av);
		break;
	}
	case 2:{
		printfloat(av);
		break;
	}
	case 3:{
		printdouble(av);
		break;
	}
	default:
		std::cout << "rien de tout ca" << std::endl;
		break;
	}
}
