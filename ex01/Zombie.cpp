/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 15:38:37 by muhabin-          #+#    #+#             */
/*   Updated: 2025/09/23 18:48:07 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Call class default constructor
Zombie::Zombie(){};

// call destructor before ending the program
Zombie::~Zombie(){
	std::cout << RED << this->name << " is destroyed " << RESET << std::endl;
}
// is a setter for giving the name to the zombie
void Zombie:: setName(std::string name){
	this->name = name;
	std::cout << GREEN << this->name << " is Named " << RESET << std::endl;
}
// annouce the zombies name
void Zombie::announce(){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

