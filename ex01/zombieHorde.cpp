#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie	*horde;
	int	i;

	horde = new Zombie[N];
	i = 0;
	while (i < N)
	{
		horde[i] = Zombie(name);
		i++;
	}
	return (horde);
}