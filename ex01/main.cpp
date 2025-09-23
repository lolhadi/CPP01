/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:48:29 by muhabin-          #+#    #+#             */
/*   Updated: 2025/09/23 18:55:50 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){

	Zombie *horde = zombieHorde(3, "LoL");
	for(int i = 0; i < 3; i++){
	horde[i].announce();
	}
	delete[]horde;
}
