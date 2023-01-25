#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat	hajar("Hajar", 10);
		std::cout << hajar << std::endl << std::endl;
		hajar.incrementGrade();
		std::cout << hajar << std::endl << std::endl;
		hajar.decrementGrade();
		std::cout << hajar << std::endl << std::endl;
		Bureaucrat tom("tom", -156);
	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
}