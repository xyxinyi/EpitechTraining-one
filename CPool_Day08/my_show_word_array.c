#include <unistd.h>

int my_putstr(char const *str)
{
	while(*str)
	{
		write(1,&*str,1);
		str++;
	}
	return 0;
}

int my_show_word_array(char * const *tab)
{
	for(int i =0;tab[i] != 0;i++)
	{
		my_putstr(tab[i]);
		my_putstr("\n");
	}
	return 0;
}  

int main()  
{  
	char *test_word_array[] = {"The","Answer","to","the","Great","Question...","Of","Life","the","Great","Question...","Of",
		"Life,","the","Universe","and","Everthing...","Is...","Forty-two,",0};
	my_show_word_array(test_word_array);
}  

