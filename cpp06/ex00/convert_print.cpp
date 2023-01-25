#include "convert.hpp"

void	isPrint(char c, long l)
{
	if (l < 0 || l > 127)
		std::cout << "char	: impossible" << std::endl;
	else if (isprint(c))
		std::cout << "char	: " << c << std::endl;
	else
		std::cout << "char	: Non displayable" << std::endl;
}

bool	isPrint(std::string str, long l)
{
	if (l < INT_MIN || l > INT_MAX)
		return (false);
	if (str == "-inff" || str == "+inff" || str == "nanf")
		return (false);
	if (str == "-inf" || str == "+inf" || str == "nan")
		return (false);
	return (true);
}

void	printChar(char *literal)
{
	char c = literal[0];

	isPrint(c, atol(literal));
	std::cout << "int	: " << static_cast<int>(c) << std::endl;
	std::cout << std::setprecision(1) << std::fixed;
	std::cout << "float	: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double	: " << static_cast<double>(c) << std::endl;
}

void	printint(char *literal)
{
	int d = atoi(literal);

	isPrint(static_cast<char>(d), atol(literal));
	std::cout << "int	: " << static_cast<int>(d) << std::endl;
	std::cout << std::setprecision(1) << std::fixed;
	std::cout << "float	: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double	: " << static_cast<double>(d) << std::endl;
}

void	printfloat(char *literal)
{
	float f = atof(literal);

	if (isPrint(static_cast<std::string>(literal), static_cast<long>(f)))
	{
		isPrint(static_cast<char>(f), atol(literal));
		std::cout << "int	: " << static_cast<int>(f) << std::endl;
	}
	else
	{
		std::cout << "char	: impossible" << std::endl;
		std::cout << "int	: impossible" << std::endl;
	}
	std::cout << std::setprecision(1) << std::fixed;
	std::cout << "float	: " << static_cast<float>(f) << "f" << std::endl;
	std::cout << "double	: " << static_cast<double>(f) << std::endl;
}

void	printdouble(char *literal)
{
	double d = atof(literal);

	if (isPrint(static_cast<std::string>(literal), static_cast<long>(d)))
	{
		isPrint(static_cast<char>(d), atol(literal));
		std::cout << "int	: " << static_cast<int>(d) << std::endl;
	}
	else
	{
		std::cout << "char	: impossible" << std::endl;
		std::cout << "int	: impossible" << std::endl;
	}
	std::cout << std::setprecision(1) << std::fixed;
	std::cout << "float	: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double	: " << d << std::endl;
}