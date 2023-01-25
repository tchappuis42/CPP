#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Constructor Intern Called" << std::endl;
	return ;
}

Intern::Intern(Intern const & src)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = src;
}

Intern & Intern::operator=(Intern const & rhs)
{
	std::cout << "Intern copy assignment called" << std::endl;
	(void) rhs;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Destructor Intern Called" << std::endl;
	return ;
}

Form * Intern::makeForm(std::string nameForm, std::string targetForm)
{
	std::string form[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int i;

	for (i = 0; i < 3; i++)
	{
		if (nameForm == form[i])
			break;
	}

	switch (i)
	{
	case 0:
	{
		std::cout << "Intern creates " << nameForm << " Form" << std::endl;
		return (new ShrubberyCreationForm(targetForm));
	}
	case 1:
	{
		std::cout << "Intern creates " << nameForm << " Form" << std::endl;
		return (new RobotomyRequestForm(targetForm));
	}
	case 2:
	{
		std::cout << "Intern creates " << nameForm << " Form" << std::endl;
		return (new PresidentialPardonForm(targetForm));
	}
	default:
		std::cerr << "unknown forum type" << std::endl;
		return NULL;
	}
}
