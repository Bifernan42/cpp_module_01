#include "Zombie.hpp"

int	main()
{
	Zombie	*a;

	randomChump("Donald");
	a = newZombie("Picsou");
	a->announce();
	delete a;
	return 0;
}
