/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:19:47 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/30 17:20:14 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Constructor Dog called\n";
	this->type_ = "Dog";
	return ;
}

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Copy assignment operator Dog called\n";
	this->type_ = rhs.type_;
	return *this;
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Copy constructor Dog called\n";
	return ;
}

Dog::~Dog()
{
	std::cout << "Destructor Dog called" << std::endl;
	return ;
}

void	Dog::makeSound() const
{
	std::cout << "WAOUF WAOUF MF" << std::endl;
	return ;
}
