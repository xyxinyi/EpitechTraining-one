#include <stdio.h>
#include <unistd.h>

int my_putchar(char c);

int my_strlen(char const *str);

int my_putnbr_base(int nbr, char const *base)
{
	int n = my_strlen(base);
	if(nbr < 0)
	{
		nbr *= -1;
		my_putchar('-');
	}
	if(nbr >= n)
	{
		my_putnbr_base(nbr/n,base);
		nbr = nbr%n;
	}
	if(nbr >= 0 && nbr < n)
	{
		my_putchar(base[nbr]);
	}
	return 0;
}

