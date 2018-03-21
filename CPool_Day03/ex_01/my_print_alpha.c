#include <unistd.h>

int my_putchar(char c);

int my_print_alpha(void)
{
	char i;
	for(i='a';i<='z';i++)
	{
		my_putchar(i);
	}
	return 0;
}
