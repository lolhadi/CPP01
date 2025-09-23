/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 15:27:25 by muhabin-          #+#    #+#             */
/*   Updated: 2025/09/23 18:44:26 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#define RED     "\033[31m"
#define GREEN	"\033[32m"
#define RESET   "\033[0m"

#include <string>
#include <iostream>

class Zombie{
	private:
		std::string name;

	public:
		Zombie(); // default constructor
		Zombie(std::string name); // Consturctor that take name
		~Zombie(); // Destructor
		void announce(); // Yell their name
		void setName(std::string name); // Setter to set the name

};

Zombie *zombieHorde(int N, std::string name);

#endif
