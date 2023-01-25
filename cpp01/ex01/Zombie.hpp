/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:21:05 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/28 13:58:58 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{
private:
	std::string	name_;
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void	announce();
	void	setname(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
