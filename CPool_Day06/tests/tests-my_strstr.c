#include<stdio.h>

/*int main()

{

char arr1[] = "ABCDEFGABCDH";

char arr2[] = "FGABCD";

//char arr2[] = "FGBCD";

//my_strstr(arr1,arr2);
	printf("%s\n",my_strstr(arr1,arr2));
return 0;

}*/
int main()  
{  
    char *s = "1234er4532";  
    char *sub = "4e";  
    printf("%s\n", my_strstr(s, sub));  
    return 0;  
} 

