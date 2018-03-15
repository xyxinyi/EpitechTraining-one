#include <unistd.h>
#include <stdio.h>

int my_is_prime(int nb)

int my_find_prime_sub(int nb)
{
	while(my_is_prime(nb) != 1)
	{
		nb++;
	}
	return nb;
}

