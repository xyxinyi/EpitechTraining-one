#include <unistd.h>
#include <stdio.h>

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

int my_print_comb(void)
{
	for(int x1=0; x1<=7; x1++)
	{
		for(int x2=1; x2<=8; x2++)
		{
			for(int x3=2; x3<=9; x3++)
			{
				int number = x1 * 100 + x2 * 10 + x3 * 1;
				my_put_nbr(number);
				write(1,",",1);
				}
			}
		}
	return 0;
}

int main()
{
	my_print_comb();
	write(1,"\n",1);
	
	
	return(0);
	}

