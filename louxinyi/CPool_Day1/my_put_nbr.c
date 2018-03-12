#include <unistd.h>

void my_putchar(int c)
{
	write(1,&c,1);
	}

int my_put_nbr(int nb)
{
	if(nb >= 10)
	{
		my_put_nbr(nb / 10);
		nb %= 10;
		}
	nb = nb + '0';
	my_putchar(nb);
	return 0;
}

int main()
{
	my_put_nbr(1234556);
	write(1,"\n",1);
	return(0);
	}

