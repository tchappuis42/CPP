/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:43:27 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/25 13:49:45 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <iostream>

class Harl
{
	private:
	
		void	debug();
		void	info();
		void	warning();
		void	error();

	public:

		Harl();
		~Harl();

		void complain( std::string level );

};

#endif