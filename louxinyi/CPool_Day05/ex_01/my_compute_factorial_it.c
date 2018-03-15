#include <stdio.h>

int my_compute_factorial_it(int nb)
{
	int res = 1;
	while(nb < 0)
		return 0;
	while(nb == 0)
		return 1;
	while(nb > 1)
	{
		res *= nb;
		nb -= 1;
	}
	return res;
}

