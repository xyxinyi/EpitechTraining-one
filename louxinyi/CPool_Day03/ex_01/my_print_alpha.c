#include <unistd.h>

void my_putchar(int c);

int my_print_alpha(void)
{
	int i;
	for(i=97;i<=122;i++)
	{
		my_putchar(i);
	}
	return 0;
}
