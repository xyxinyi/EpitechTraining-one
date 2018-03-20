#include <unistd.h>
#include <stdio.h>

char *my_revstr(char *str)
{
        char *start = str;
        char *left = str;
        char ch;
        while (*str++);
        str -= 2;
        while (left < str)
        {
                ch = *left;
                *left++ = *str;
                *str-- = ch;
        }
        return(start);
}

int main()
{
	//char *str1 = "hello";
	//char *str2 = "world"
	char str1[] = "hello";
	//char str2[] = "world";
	printf("%s\n",my_revstr(str1));
}
