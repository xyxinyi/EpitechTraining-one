#include <unistd.h>

int my_putstr(char const *str);

int my_show_word_array(char * const *tab)
{
	for(int i =0;tab[i] != 0;i++)
	{
		my_putstr(tab[i]);
		my_putstr("\n");
	}
	return 0;
}

