/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:33:01 by tchappui          #+#    #+#             */
/*   Updated: 2022/08/14 15:25:56 by tchappui         ###   ########.fr       */
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
	//std::cout << "Copy constructor called\n";
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
	//std::cout << "Copy assignment operator called\n";
	this->_value = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	//std::cout << "getRawBits member function called\n";
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called\n";
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

bool	Fixed::operator>(Fixed const & rhs) const
{
	return this->_value > rhs.getRawBits();
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	return this->_value < rhs.getRawBits();
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	return this->_value >= rhs.getRawBits();
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	return this->_value <= rhs.getRawBits();
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	return this->_value == rhs.getRawBits();
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	return (!(this->_value == rhs.getRawBits()));
}

Fixed	Fixed::operator+(Fixed const & rhs) const
{
	Fixed tmp(*this);

	tmp.setRawBits((this->_value + rhs.getRawBits()));
	return (tmp);
}

Fixed	Fixed::operator-(Fixed const & rhs) const
{
	Fixed tmp(*this);

	tmp.setRawBits((this->_value - rhs.getRawBits()));
	return (tmp);
}

Fixed	Fixed::operator*(Fixed const & rhs)
{
	Fixed tmp(*this);

	tmp.setRawBits(this->_value * rhs.getRawBits() >> this->_bits);
	return (tmp);
}

Fixed	Fixed::operator/(Fixed const & rhs)
{
	Fixed tmp(*this);
	
	tmp.setRawBits((this->_value << this->_bits) / rhs.getRawBits());
	return (tmp);
}

Fixed Fixed::operator++()
{
	this->_value++;
	return (*this);
}
Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	
	this->_value++;
	return (tmp);
}
Fixed	Fixed::operator--()
{
	this->_value--;
	return(*this);
}
Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;

	this->_value--;
	return(tmp);
}

Fixed & Fixed::min(Fixed & s1, Fixed & s2)
{
	if (s1.getRawBits() > s2.getRawBits())
		return (s2);
	return (s1);
}

const Fixed	& Fixed::min(Fixed const & s1, Fixed const & s2)
{
	if (s1.getRawBits() > s2.getRawBits())
		return (s2);
	return (s1);
}

Fixed & Fixed::max(Fixed & s1, Fixed & s2)
{
	if (s1.getRawBits() < s2.getRawBits())
		return (s2);
	return (s1);
}

const Fixed	& Fixed::max(Fixed const & s1, Fixed const & s2)
{
	if (s1.getRawBits() < s2.getRawBits())
		return (s2);
	return (s1);
}