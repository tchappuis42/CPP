/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:46:55 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/25 16:40:58 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:

	int 				_value;
	static const int	_bits = 8;

public:

	Fixed();
	Fixed(Fixed const & src);
	~Fixed();

	int getRawBits( void ) const;
	void setRawBits( int const raw );

	Fixed & operator=(Fixed const & rhs);
};

#endif
