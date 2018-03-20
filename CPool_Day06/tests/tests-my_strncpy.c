#include <unistd.h>
#include <stdio.h>

int main()
{
	//char *str1 = "hello";
	//char *str2 = "world"
	char str1[20] = "how";
	char str2[20] = "whatabcdef";
	printf("%s\n",my_strncpy(str1,str2,2));
	return 0;
}
