/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:14:17 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/28 14:11:01 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "memory adress" << std::endl;
	std::cout << "str = " << &str << std::endl;
	std::cout << "stringPTR = " << stringPTR << std::endl;
	std::cout << "stringREF = " << &stringREF << std::endl;

	std::cout << "value of" << std::endl;
	std::cout << "str = " << str << std::endl;
	std::cout << "stringPTR = " << *stringPTR << std::endl;
	std::cout << "stringREF = " << stringREF << std::endl;
}