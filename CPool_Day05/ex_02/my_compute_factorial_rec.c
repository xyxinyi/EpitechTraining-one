#include <stdio.h>

int my_compute_factorial_rec(int nb)
{
	if(nb < 0)
		return 0;
	else if(nb == 0)
		return 1;
	else
		return nb*my_compute_factorial_rec(nb - 1);
}

int main(void) 
{ 
	printf("%d\n",my_compute_factorial_rec(5));
	printf("%d\n",my_compute_factorial_rec(0));
	printf("%d\n",my_compute_factorial_rec(-5));
	return 0;
}
