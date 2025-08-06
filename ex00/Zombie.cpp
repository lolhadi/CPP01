#include "Zombie.hpp"

// first we need to specify what the constructor do
// so when the consturctor got the name for the user it will
// pass as the name to the object name.
Zombie::Zombie(std::string name){
	this->name = name;
}

/*
	#We should a destructor since we have a constructor
	#The destructor should destroy the object name and cout the
	destroy message
*/
Zombie::~Zombie(){
	std::cout << RED << this->name << "is destroyed " << RESET << std::endl;
}
