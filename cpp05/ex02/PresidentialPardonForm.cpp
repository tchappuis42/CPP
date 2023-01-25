#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	std::cout << "Constructor PresidentialPardonForm Called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Form", 25, 5), target_(target)
{
	std::cout << "Constructor PresidentialPardonForm Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & src) : Form(src)
{
	*this = src;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	if (this != &rhs)
	{
		this->target_ = rhs.target_;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Constructor PresidentialPardonForm Called" << std::endl;
	return ;
}

void	PresidentialPardonForm::execute_form() const
{
	std::cout << this->target_ << " was forgiven by Zaphod Beeblebrox." << std::endl;
}