/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:54:47 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/31 15:11:59 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	type_;
	public:
		Animal();
		Animal & operator=(Animal const & rhs);
		Animal(Animal const & src);
		virtual ~Animal();

		virtual void		makeSound() const = 0;
		std::string	getType() const;
};

#endif
