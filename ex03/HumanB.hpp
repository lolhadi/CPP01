/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 22:43:35 by muhabin-          #+#    #+#             */
/*   Updated: 2025/09/25 22:50:50 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{

	private:
		std::string _name;
		Weapon *_weapon;
	public:
		HumanB(std::string name);
		void attack();
		void setWeapon(Weapon &Weapon);
};

#endif
