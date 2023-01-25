/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:33:01 by tchappui          #+#    #+#             */
/*   Updated: 2022/08/14 16:28:41 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->_value = 5;
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called\n";
	*this = src;

	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
	return ;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called\n";
	this->_value = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->_value = raw;
	return ;
}
