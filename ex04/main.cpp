/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 09:42:09 by muhabin-          #+#    #+#             */
/*   Updated: 2025/09/26 10:48:50 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include<iostream>
#include<fstream>

#define RED     "\033[31m"
#define GREEN	"\033[32m"
#define RESET   "\033[0m"

// Function to replace the string
std::string replaceString(std::string line, std::string s1, std::string s2){

	size_t pos = line.find(s1);
	while (pos != std::string::npos){
		line.erase(pos, s1.length());
		line.insert(pos,s2);
		pos = line.find(s1, pos + s2.length());
	}
	return line;
}
int main(int argc, char **argv){

	std::string line;
	if (argc != 4){
		std::cerr << RED << "Wrong Argument" << RESET<< std::endl;
		return (1);
	}
	// Assign string from argv
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	// Trying to open file

	std::ifstream infile(filename.c_str());
	if (!infile.is_open()){
		std::cerr << RED << "Error: Cannot open file " << filename << RESET << std::endl;
		return 1;
	}
	// Trying to create outfile
	std::ofstream outfile((filename + ".replace").c_str());
	if (!outfile.is_open()){
		std::cerr << RED << "Error: File cannot created " << filename + ".replace" << RESET << std::endl;
		return 1;
	}

	// Reading line by line
	while (std::getline(infile, line)){
		std::string newLine = replaceString(line, s1, s2);
		outfile << newLine << std::endl;
	}
}
