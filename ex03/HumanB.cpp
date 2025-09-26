/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 22:54:26 by muhabin-          #+#    #+#             */
/*   Updated: 2025/09/25 23:09:45 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
	: _name(name), _weapon(NULL){}

void HumanB::setWeapon(Weapon &weapon){
	_weapon = &weapon;
}

void HumanB::attack(){
	if (!_weapon){
		std::cout << RED << this->_name << " yolo fist fight "<< RESET << std::endl;
		return;
	}
	std::cout << RED << this->_name << " attacks with their " << _weapon->getType() << RESET << std::endl;
}
