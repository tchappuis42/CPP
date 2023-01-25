/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:34:47 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/19 18:20:11 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name_;
		Weapon&		weapon;
		
	public:
		HumanA(std::string name, Weapon& club);
		~HumanA();

		void	attack();
};

#endif