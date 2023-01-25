/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:04:45 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/31 15:14:29 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	//const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	i->makeSound();
	j->makeSound();
	//meta->makeSound();


	delete(j);
	delete(i);
	//delete(meta);
	return (0);
}