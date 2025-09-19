#include "Zombie.hpp"

/*
	* So this function return a pointer zombie, takes a name string,
	* since i used new(Heap allocation), to the i used the zombie class to create a new one
	* so this function can be used outside the scope, need to delete in main after used
	* the zombie that created by heap will continue living even after function
*/
Zombie* newZombie(std::string name){

	Zombie* z = new Zombie(name); //so Zombie* works as data type, z is the declare, with the function variable
	return z;
}
