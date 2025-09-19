#include "Zombie.hpp"

int main(){


	Zombie z("Stacky");
	z.announce();
	Zombie* h = newZombie("Heapster");
	h->announce();
	delete(h);
}
