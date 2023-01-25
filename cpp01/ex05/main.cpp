/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:22:55 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/25 14:30:16 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	harl;
	harl.complain("INFO");
	harl.complain("ERROR");
	harl.complain("DEBUG");
	harl.complain("WARNING");
	harl.complain("TEST");
}