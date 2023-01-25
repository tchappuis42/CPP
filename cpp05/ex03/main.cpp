#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int	main()
{
	try
	{
		Bureaucrat	hajar("Hajar", 30);
		Intern	tom;
		Intern	luc(tom);
		Form* rrf;

		rrf = luc.makeForm("robotomy request", "Bender");

		std::cout << *rrf << std::endl;
		hajar.executeForm(*rrf);
		delete rrf;
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
