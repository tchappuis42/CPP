#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
	std::cout << "Constructor RobotomyRequestForm Called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Form", 72, 45), target_(target)
{
	std::cout << "Constructor RobotomyRequestForm Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & src) : Form(src)
{
	*this = src;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) //todo
{
	if (this != &rhs)
	{
		this->target_ = rhs.target_;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Constructor RobotomyRequestForm Called" << std::endl;
	return ;
}

void	RobotomyRequestForm::execute_form() const
{
	std::cout << "drill noise\n";
	if ((rand() % 10) % 2)
		std::cout << this->target_ << " as been Robotomysed" << std::endl;
	else
		std::cout << "the operation failed" << std::endl;
}
