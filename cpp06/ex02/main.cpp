#include <cstdlib>
#include <typeinfo>
#include <exception>
#include <iostream>
#include <ctime>

class	Base {public : virtual ~Base( void ) {} };
class	a: public Base {};
class	b: public Base {};
class	c: public Base {};

Base * generate(void)
{
	std::srand(std::time(NULL));
	int i = std::rand() % 3;

	switch (i)
	{
	case 0:
		return (new a);
	case 1:
		return (new b);
	case 2:
		return (new c);
	default:
		return (NULL);
	}
}

void identify(Base* p)
{
	if (dynamic_cast<a*>(p))
		std::cout << "p = a" << std::endl;
	else if (dynamic_cast<b*>(p))
		std::cout << "p = b" << std::endl;
	else if (dynamic_cast<c*>(p))
		std::cout << "p = c" << std::endl;
	else
		return ;
}

void identify(Base& p)
{
	try
	{
		a & d = dynamic_cast<a &>(p);
		(void) d;
		std::cout << "p = a" << std::endl;
		return ;
	}
	catch(const std::bad_cast  &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		b & d = dynamic_cast<b &>(p);
		(void) d;
		std::cout << "p = b" << std::endl;
		return ;
	}
	catch(const std::bad_cast &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		c & d = dynamic_cast<c &>(p);
		(void) d;
		std::cout << "p = c" << std::endl;
		return ;
	}
	catch(const std::bad_cast  &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int	main()
{
	Base *p;

	p = generate();
	identify(p);
	identify(p);
	delete p;
}