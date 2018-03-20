#include <unistd.h>
#include <stdio.h>

int main()
{
	//char *str1 = "hello";
	//char *str2 = "world"
	char str1[] = "hello";
	char str2[] = "world";
	printf("%s\n",my_strcpy(str1,str2));
}
