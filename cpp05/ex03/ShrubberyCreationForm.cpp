#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::cout << "Constructor ShrubberyCreationForm Called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Form", 145, 137), target_(target)
{
	std::cout << "Constructor ShrubberyCreationForm Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & src) : Form(src)
{
	*this = src;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) //todo
{
	if (this != &rhs)
	{
		this->target_ = rhs.target_;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Constructor ShrubberyCreationForm Called" << std::endl;
	return ;
}

void	ShrubberyCreationForm::execute_form() const
{
	char *name = new char[this->target_.length()+11];

	std::strcpy (name, target_.c_str());
	std::ofstream	file(strcat(name, "_shrubbery"));
	std::string tree = ""
	"        # #### ####\n"
	"    ### \\/#|### |/####\n"
    "   ##\\/#/ \\||/##/_/##/_#\n"
    "  ###  \\/###|/ \\/ # ###\n"
    " ##_\\_#\\_\\## | #/###_/_####\n"
    "## #### # \\ #| /  #### ##/##\n"
    " __#_--###  |{,###---###-~\n"
    "           \\ }{\n"
    "            }}{\n"
    "            }}{\n"
	"            }}{\n"
    "            }}{\n";
	for (size_t i = 0; i < 5; i++)
	{
		file << tree << std::endl;
	}
	file.close();
	delete[] name;
}
