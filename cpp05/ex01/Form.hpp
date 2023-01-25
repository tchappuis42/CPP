#ifndef FORM_H
# define FORM_H

#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	name_;
		bool				signed_;
		const int 			grade_s_;
		const int			garde_e_;

	public:
		Form();
		Form(std::string name, int garde_s, int grade_e);
		Form(const Form &origin);
		Form & operator=(Form & rhs);
		~Form();

		int		getGradeS() const;
		int		getGradeE() const;
		bool	is_Signed() const;
		std::string	get_Name() const;
		void	beSigned(const Bureaucrat & bureaucrat);

		class GradeTooHighException;
		class GradeTooLowException;
};

std::ostream &operator<<(std::ostream &o, Form const &form);

class Form::GradeTooHighException : public std::exception
{
	public:
			virtual const char* what() const throw()
			{
				return("The grade of the form is too high");
			}
};

class Form::GradeTooLowException : public std::exception
{
	public:
			virtual const char* what() const throw()
			{
				return("The grade of the form is too low");
			}
};

#endif
