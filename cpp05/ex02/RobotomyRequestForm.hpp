#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <cstdlib>

class RobotomyRequestForm : public Form
{
	private:
		std::string target_;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs); 
		RobotomyRequestForm(RobotomyRequestForm const & src);
		virtual ~RobotomyRequestForm();

		void	execute_form() const;
};

#endif
