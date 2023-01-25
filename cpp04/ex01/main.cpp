/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:04:45 by tchappui          #+#    #+#             */
/*   Updated: 2022/08/26 17:26:23 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// int main()
// {
// 	Cat keanu;
// 	Cat marco(keanu);

// 	std::cout << marco.getType() << std::endl;
// 	marco.makeSound();

// 	return (0);
// }

int main()
{
	Animal* meta[10];
	
	for (size_t i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
	}

	for (size_t i = 0; i < 10; i++)
	{
		delete(meta[i]);
	}
}