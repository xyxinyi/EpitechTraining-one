#include <stdio.h>

int my_compute_power_it(int nb,int p)
{	
	int res = 1;
	if(p < 0)
		return 0;
	else if(p == 0)
		return 1;
	while(p > 0)
	{
		res = res * nb;
		p--;
	}
	return res;
}
