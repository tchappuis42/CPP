#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string target_;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs); 
		PresidentialPardonForm(PresidentialPardonForm const & src);
		virtual ~PresidentialPardonForm();

		void	execute_form() const;
};

#endif