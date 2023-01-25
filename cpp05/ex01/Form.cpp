#include "Form.hpp"

Form::Form() : grade_s_(0), garde_e_(0) 
{
	std::cout << "Constructor Form Called" << std::endl;
	return ;
}

Form::Form(std::string name, int grade_s, int grade_e) : name_(name), grade_s_(grade_s), garde_e_(grade_e) 
{
	signed_ = 0;
	if (grade_e < 1 || grade_s < 1)
		throw Form::GradeTooHighException();
	else if (grade_e > 150 || grade_s > 150)
		throw Form::GradeTooLowException();
	std::cout << "Constructor Form Called" << std::endl;
}

Form::Form(const Form & origin) : name_(origin.get_Name()), signed_(origin.is_Signed()), grade_s_(origin.getGradeS()), garde_e_(origin.getGradeE())
{
	std::cout << "Form copy constructor called" << std::endl;
	return ;
}

Form & Form::operator=(Form & rhs)
{
	std::cout << "Form copy assignment called" << std::endl;
	if (this != &rhs)
	{
		this->signed_ = rhs.is_Signed();
	}
	return (*this);
}

Form::~Form()
{
	std::cout << "Destructor Form Called" << std::endl;
}

int	Form::getGradeS() const
{
	return (this->grade_s_);
}

int Form::getGradeE() const
{
	return (this->garde_e_);
}

bool	Form::is_Signed() const
{
	return (this->signed_);
}

std::string	Form::get_Name() const
{
	return (this->name_);
}

void Form::beSigned(const Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() > this->grade_s_)
	{
		std::cout << bureaucrat.getName() << " could not sign the " << this->name_ <<  " because his rank is too low" << std::endl;
		std::cout << "Grade of " << bureaucrat.getName() << " : " << bureaucrat.getGrade() << " | ";
		std::cout << "Grade of " << this->get_Name() << " : " << this->grade_s_ << std::endl;
		throw Bureaucrat::GradeTooLowException();
	}
	this->signed_ = true;
}

std::ostream &	operator<<(std::ostream &o, Form const & form)
{
	o << form.get_Name() << ", grade to sign : " << form.getGradeS() << " , grade to execute : " << form.getGradeE() << " sign : " << form.is_Signed();
	return (o);
}


