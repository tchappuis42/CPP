/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:42:55 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/30 17:43:55 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Constructor WrongAnimal called\n";
	this->type_ = "WrongAnimal";
	return ;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "Copy assignment operator WrongAnimal called\n";
	this->type_ = rhs.type_;
	return *this;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) : type_(src.type_)
{
	std::cout << "Copy constructor WrongAnimal called\n";
	return ;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor WrongAnimal called" << std::endl;
	return ;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Cui Cui" << std::endl;
	return ;
}

std::string	WrongAnimal::getType() const
{
	return (this->type_);
}