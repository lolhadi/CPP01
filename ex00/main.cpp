#include "Zombie.hpp"

int main(){

	randomChump("RandomStack");
	Zombie* h = newZombie("Heapster");
	h->announce();
	Zombie z("Stacky");
	z.announce();
	delete(h);
}
