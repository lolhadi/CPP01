#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#define RED     "\033[31m"
#define RESET   "\033[0m"

#include <string>
#include <iostream>

class Zombie{
	private:
		std::string name; //only the zombie will know it own name

	public:
		Zombie(std::string name); //consturctor: can create object anywhere: in this Create the name of each zombie
		~Zombie();	//destructor: can destroy object anywhere or automaticly: this display destroy msg
		void announce(); //publicly annouce the name of the zombie
};

#endif
