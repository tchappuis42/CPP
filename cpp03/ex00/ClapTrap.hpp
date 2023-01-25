/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:39:01 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/28 16:55:30 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string	Name_;
		int	Hit_;
		int	Energy_;
		int	Attack_;

	public:

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap & operator=(ClapTrap const & rhs);
		ClapTrap(ClapTrap const & src);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif

