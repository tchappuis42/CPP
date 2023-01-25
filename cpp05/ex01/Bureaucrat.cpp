#include "Form.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Constructor Bureaucrat Called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name_(name), grade_(grade)
{
	if (grade_ < 1)
		throw GradeTooHighException();
	else if (grade_ > 150)
		throw GradeTooLowException();
	std::cout << "Constructor Bureaucrat Called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat & origin) : name_(origin.getName()), grade_(origin.getGrade())
{
	if (grade_ < 1)
		throw GradeTooHighException();
	else if (grade_ > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat &rhs)
{
	std::cout << "Bureaucrat copy assignment called" << std::endl;
	if (this != &rhs)
		this->grade_ = rhs.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor Bureaucrat Called" << std::endl;
}

std::string Bureaucrat::getName() const
{
	return (this->name_);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade_);
}

void	Bureaucrat::incrementGrade()
{
	if (this->grade_ - 1 < 1)
		throw GradeTooHighException();
	else
	{
		this->grade_ -= 1;
		std::cout << "your rank has been increased" << std::endl;
	}
}

void	Bureaucrat::decrementGrade()
{
	if (this->grade_ + 1 > 150)
		throw GradeTooLowException();
	else
	{
		this->grade_ += 1;
		std::cout << "your rank has been decremented" << std::endl;
	}
}

std::ostream &	operator<<(std::ostream &o, Bureaucrat const & bureaucrat)
{
	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (o);
}

void	Bureaucrat::signForm(Form &form)
{
	form.beSigned(*this);
	std::cout << this->name_ << " signed " << form.get_Name() << std::endl;
}

