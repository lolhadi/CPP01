/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 12:58:27 by muhabin-          #+#    #+#             */
/*   Updated: 2025/09/26 14:48:47 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(){
	std::cout << GREEN << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger." << RESET << std::endl;
}

void Harl::info(){
	std::cout << RED << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << RESET << std::endl;
}

void Harl::warning(){
	std::cout << GREEN << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << RESET << std::endl;
}

void Harl::error(){
	std::cout << RED << "This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
}

void Harl::complain(std::string level){

	// Create string arrays
	std::string _level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	// Pointer Function that link to the private attribute
	void (Harl::*functions[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	// Checking the matching function;
	for (int i = 0; i < 4; i++){
		if (level == _level[i]){
			(this->*functions[i])();
		}
	}
}

