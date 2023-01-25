#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern & operator=(Intern const & rhs); 
		Intern(Intern const & src);	
		~Intern();
	
		Form* makeForm(std::string nameForm, std::string targetForm);
};

#endif