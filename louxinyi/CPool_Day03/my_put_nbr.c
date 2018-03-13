#include <unistd.h>
#include"my_put_nbr.h"

void my_putchar(int c)
{
	write(1,&c,1);
	}

int my_put_nbr(int nb)
{
	if(nb>=0)
	{
		if(nb >= 10)
		{
			my_put_nbr(nb / 10);
			nb %= 10;
			}
		nb = nb + '0';
		my_putchar(nb);
		}
	if(nb<0)
	{
		my_putchar('-');
		nb=-nb;
		my_put_nbr(nb);
		}
	return 0;
}

