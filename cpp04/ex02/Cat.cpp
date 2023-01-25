/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:19:20 by tchappui          #+#    #+#             */
/*   Updated: 2022/08/26 17:28:04 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Constructor Cat called\n";
	this->type_ = "Cat";
	this->Brain_ = new Brain();
	return ;
}

Cat & Cat::operator=(Cat const & rhs)
{
	std::cout << "Copy assignment operator Cat called\n";
	if (this != &rhs)
	{
		this->type_ = rhs.type_;
		this->Brain_ = new Brain();
		*(this->Brain_) = *(rhs.Brain_); // copie par dereferencement 
	}
	return *this;
}

Cat::Cat(Cat const & src) : Animal(src)
{
	std::cout << "Copy constructor Cat called\n";
	*this = src;
	return ;
}

Cat::~Cat()
{
	std::cout << "Destructor Cat called" << std::endl;
	delete(this->Brain_);
	return ;
}

void	Cat::makeSound() const
{
	std::cout << "MAAAAAAAAAAAAAAAAUUUUUUUUUUUUUU" << std::endl;
	return ;
}
