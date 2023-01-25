/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:57:40 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/30 18:10:48 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*Brain_;
	public:
		Cat();
		Cat & operator=(Cat const & rhs);
		Cat(Cat const & src);
		virtual ~Cat();

		virtual void		makeSound() const;
};

#endif
