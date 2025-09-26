/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 20:54:42 by muhabin-          #+#    #+#             */
/*   Updated: 2025/09/25 23:13:20 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// Consturctor to create the type of weapon
Weapon::Weapon(std::string type){
	this->_type = type;
}

// return const reference to avoid copying the string
const std::string& Weapon::getType(){
	return _type;
}

// set the weapon type
void Weapon::setType(std::string newType){
	_type = newType;
}
