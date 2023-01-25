/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:40:21 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/30 17:42:25 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string	type_;
	public:
		WrongAnimal();
		WrongAnimal & operator=(WrongAnimal const & rhs);
		WrongAnimal(WrongAnimal const & src);
		 ~WrongAnimal();

		void		makeSound() const;
		std::string	getType() const;
};

#endif
