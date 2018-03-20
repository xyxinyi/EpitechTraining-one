#include <stdio.h>
#include <unistd.h>

int my_power(int r, int p)
{
	int s = 1;	
	if(p == 0)
		return (1);
	else if(p < 0)
		return (0);
	else
		s = my_power(r,p-1)*r;
	return s;
}

int my_compute_square_root(int nb)
{
	int n = 1;
	while(n <= nb)
	{
		if(my_power(n, 2) == nb)
		{
			return n;
		}
		n++;
	}
	return 0;
}

