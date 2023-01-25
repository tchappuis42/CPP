/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:46:00 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/30 17:46:50 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Constructor WrongCat called\n";
	this->type_ = "WrongCat";
	return ;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "Copy assignment operator WrongCat called\n";
	this->type_ = rhs.type_;
	return *this;
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src)
{
	std::cout << "Copy constructor WrongCat called\n";
	return ;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat called" << std::endl;
	return ;
}

void	WrongCat::makeSound() const
{
	std::cout << "MAAAAAAAAAAAAAAAAUUUUUUUUUUUUUU" << std::endl;
	return ;
}
