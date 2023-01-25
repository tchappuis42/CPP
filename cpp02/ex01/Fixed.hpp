/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:46:55 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/25 17:36:04 by tchappui         ###   ########.fr       */
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

	Fixed & operator=(Fixed const & rhs);
};

std::ostream & operator<<( std::ostream & o, const Fixed& rhs);
#endif
