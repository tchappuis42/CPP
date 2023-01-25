/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:19:47 by tchappui          #+#    #+#             */
/*   Updated: 2022/08/26 17:28:43 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Constructor Dog called\n";
	this->type_ = "Dog";
	this->Brain_ = new Brain();
	return ;
}

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Copy assignment operator Dog called\n";
	if (this != &rhs)
	{
		this->type_ = rhs.type_;
		this->Brain_ = new Brain();
		*(this->Brain_) = *(rhs.Brain_); // copie par dereferencement 
	}
	return *this;
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Copy constructor Cat called\n";
	*this = src;
	return ;
}

Dog::~Dog()
{
	std::cout << "Destructor Dog called" << std::endl;
	delete(this->Brain_);
	return ;
}

void	Dog::makeSound() const
{
	std::cout << "WAOUF WAOUF MF" << std::endl;
	return ;
}
