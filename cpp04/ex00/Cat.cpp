/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:19:20 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/30 17:19:32 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Constructor Cat called\n";
	this->type_ = "Cat";
	return ;
}

Cat & Cat::operator=(Cat const & rhs)
{
	std::cout << "Copy assignment operator Cat called\n";
	this->type_ = rhs.type_;
	return *this;
}

Cat::Cat(Cat const & src) : Animal(src)
{
	std::cout << "Copy constructor Cat called\n";
	return ;
}

Cat::~Cat()
{
	std::cout << "Destructor Cat called" << std::endl;
	return ;
}

void	Cat::makeSound() const
{
	std::cout << "MAAAAAAAAAAAAAAAAUUUUUUUUUUUUUU" << std::endl;
	return ;
}
