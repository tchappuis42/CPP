#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include "Form.hpp"
# include <fstream>
# include <string>
# include <cstring>

class ShrubberyCreationForm : public Form
{
	private:
		std::string target_;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs); 
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		virtual ~ShrubberyCreationForm();

		virtual void	execute_form() const;
};

#endif
