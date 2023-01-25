#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	try
	{
		Bureaucrat	hajar("Hajar", 1);
		Form	form("cv", 100, 100);
		Form	gat(form);

		std::cout << gat << std::endl;
		std::cout << form << std::endl;
		hajar.signForm(form);
		std::cout << form << std::endl;
		std::cout << gat << std::endl;
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
