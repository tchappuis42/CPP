#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	try
	{
		Bureaucrat	hajar("Hajar", 1);
		ShrubberyCreationForm garden("garden");
		RobotomyRequestForm car("toyota");
		PresidentialPardonForm Michele("Michèle");
	

		std::cout << garden << std::endl;
		std::cout << car << std::endl;
		std::cout << Michele << std::endl;

		
		hajar.executeForm(garden);
		hajar.executeForm(car);
		hajar.signForm(Michele);
		hajar.executeForm(Michele);

		PresidentialPardonForm leo(Michele);
		std::cout << leo << std::endl;
		hajar.executeForm(leo);
	}

	catch(Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Form::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
