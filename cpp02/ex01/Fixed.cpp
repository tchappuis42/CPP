/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:33:01 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/25 17:49:44 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->_value = 0;
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

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called\n";
	this->_value = value << this->_bits;
	return ;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called\n";
	this->_value = roundf(value * (1 << this->_bits));
	return ;
}

int Fixed::toInt() const
{
	return this->_value >> this->_bits;
}

float Fixed::toFloat() const
{
	return (float)this->_value / (float)(1 << this->_bits);
}

std::ostream & operator<<( std::ostream & o, const Fixed& rhs)
{
	o << rhs.toFloat();
	return o;
}
