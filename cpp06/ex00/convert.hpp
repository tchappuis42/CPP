#ifndef CONVERT_H
# define CONVERT_H

# include <iostream>
# include <string> 
# include <iomanip>
# include <limits.h>
# include <cstdlib> 

void	get_type(std::string literal, char *av);
void	printint(char *literal);
void	printChar(char *literal);
void	printdouble(char *literal);
void	printfloat(char *literal);

typedef bool (*ft_array) (std::string);

#endif