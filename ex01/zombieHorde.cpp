/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:40:35 by muhabin-          #+#    #+#             */
/*   Updated: 2025/09/23 18:55:34 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name){

	Zombie *horde = new Zombie[N]; // creating Zombies without name

	for(int i = 0; i < N ; i++ ){
		horde[i].setName(name); // naming the zombies
	}
	return horde;
}
