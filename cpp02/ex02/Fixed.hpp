/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:46:55 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/27 14:36:01 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:

	int 				_value;
	static const int	_bits = 8;

public:

	Fixed();
	Fixed(Fixed const & src);
	Fixed(int const);
	Fixed(float const);
	~Fixed();

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

	bool	operator>(Fixed const & rhs) const;
	bool	operator<(Fixed const & rhs) const;
	bool	operator>=(Fixed const & rhs) const;
	bool	operator<=(Fixed const & rhs) const;
	bool	operator==(Fixed const & rhs) const;
	bool	operator!=(Fixed const & rhs) const;
	Fixed & operator=(Fixed const & rhs);
	Fixed	operator+(Fixed const & rhs) const;
	Fixed	operator-(Fixed const & rhs) const;
	Fixed	operator*(Fixed const & rhs);
	Fixed	operator/(Fixed const & rhs);
	Fixed	operator++();
	Fixed	operator++(int);
	Fixed	operator--();
	Fixed	operator--(int);

	static Fixed	& min(Fixed & s1, Fixed & s2);
	static const Fixed	& min(Fixed const & s1, Fixed const & s2);
	static Fixed	& max(Fixed & s1, Fixed & s2);
	static const Fixed	& max(Fixed const & s1, Fixed const & s2);


};

std::ostream & operator<<( std::ostream & o, const Fixed& rhs);
#endif
