#include <unistd.h>
#include <stdio.h>

int main()
{
	char s[100];
	scanf("%s",s);
	printf("%s\n",my_evil_str(s));
	return 0;
}

