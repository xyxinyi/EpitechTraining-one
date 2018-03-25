#include <stdio.h>
#include <stdlib.h>
#include "include/my.h"

int my_strlen(char const *str);
char *my_strdup(char const *src);
char **my_str_to_word_array(char const *str);

struct info_param
{
	int length;
	char *str;
	char *copy;
	char **word_array;
};

struct info_param *my_params_to_array(int ac, char **av) 
{
	struct info_param *info;
	int i = 0;
	info = malloc(sizeof(struct info_param) * (ac + 1));
	if(info == NULL)
		return 0;
	for(i = 0; i < ac; i++) 
	{
		info[i].length = my_strlen(av[i]);
		info[i].str = av[i] + '\0';
		info[i].copy = my_strdup(av[i]);
		info[i].word_array = my_str_to_word_array(av[i]);
	}
	info[i + 1].str = '\0';
	return info;
}

int main(int ac, char **av)
{
	struct info_param *test;
	test = my_params_to_array(ac,av);
	my_show_word_array(test);
}

