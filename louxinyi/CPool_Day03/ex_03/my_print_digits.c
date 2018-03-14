#include <unistd.h>

void my_putchar(int c)

int my_print_digits(void)
{
	char c;
	for(c='0';c<='9';c++)
	{
		my_putchar(c);
	}
	return 0;
}
