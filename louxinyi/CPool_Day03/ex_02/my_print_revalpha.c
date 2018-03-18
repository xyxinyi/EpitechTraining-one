#include <unistd.h>

void my_putchar(int c);

int my_print_revalpha(void)
{
	int i;
	for(i=122;i>=97;i--)
	{
		my_putchar(i);
	}
	return 0;
}
