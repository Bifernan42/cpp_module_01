#include "Zombie.hpp"
#define N 10

int	main()
{
	Zombie	*Z;
	Zombie	*start;

	Z = zombieHorde(N, "Paul");
	int	i = 0;
	start = Z;
	while (i < N)
	{
		(*Z).announce();
		Z += sizeof(Zombie);
		i++;
	}
	delete[] start;
	return 0;
}
