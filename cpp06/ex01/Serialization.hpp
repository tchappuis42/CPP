#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <string>
# include <iostream>

typedef struct Data
{
	double	dofus;
	float	f;
	int		nb;
} t_data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif