#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>

class Bureaucrat
{
    private:
        std::string const name_ ;
        int         grade_;

    public:
        Bureaucrat();
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(const Bureaucrat &origin);
        Bureaucrat & operator=(Bureaucrat & rhs);
        ~Bureaucrat();

        std::string getName() const;
        int getGrade() const;
        void    signForm(class Form& form);

        void incrementGrade();
        void decrementGrade();


        class GradeTooHighException;
        class GradeTooLowException;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &bureaucrat);

class Bureaucrat::GradeTooHighException : public std::exception
{
    public:
            virtual const char* what() const throw()
            {
                return("The grade of the bureaucrat is too high");
            }
};

class Bureaucrat::GradeTooLowException : public std::exception
{
    public:
            virtual const char* what() const throw()
            {
                return("The grade of the bureaucrat is too low");
            }
};

#endif