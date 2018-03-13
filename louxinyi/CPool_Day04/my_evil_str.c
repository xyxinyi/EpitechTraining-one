#include <unistd.h>
#include <stdio.h>

void my_putchar(int c)
{
	write(1,&c,1);
	}

int my_strlen(char const *str)
{
	int length = 0;
	while(*str++ != '\0')
	{
		length++;
		}
	return length;
	}

char my_evil_str(char *str)
{
	int i;
	char a[10];
	a = char *str;
	int n = my_strlen(str);
	gets(a);
	for(i=n-1;i>=0;i--)
	my_putchar(a[i]);
	write(1,"\n",1);
	return 0;
	}

int main()
{
	int p = my_strlen("hello");
	write(1,&p,1);
	my_putchar(p);
	//printf("%d\n",my_strlen("hello"));
	write(1,"\n",1);
	return 0;
}

