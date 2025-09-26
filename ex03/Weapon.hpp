/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:08:14 by muhabin-          #+#    #+#             */
/*   Updated: 2025/09/25 22:45:26 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include<iostream>
#include<string>

#define RED     "\033[31m"
#define GREEN	"\033[32m"
#define RESET   "\033[0m"

class Weapon{

	private:
		std::string _type;

	public:

		Weapon(std::string type);
		const std::string &getType();
		void setType (std::string newType);
};

#endif
