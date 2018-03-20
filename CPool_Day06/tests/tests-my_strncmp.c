#include <stdio.h>

/*int main()  
{  
    char str1[10];  
    char str2[10];  
    int n;  
    scanf ("%s",str1);  
    scanf ("%s",str2);  
    scanf ("%d",&n);  
    //printf ("%d\n",strcmp(str1,str2));  
    printf ("%d\n",strncmp(str1,str2,n));  
    return 0;  
}  */
int main()
{
	char *s1 = "qwer";
	char *s2 = "er1234";
	char *s3 = "qwer";
	printf("%d\n",strncmp(s1,s2,4));	
	printf("%d\n",strncmp(s1,s3,4));	
	printf("%d\n",my_strncmp(s1,s2,4));	
	printf("%d\n",my_strncmp(s1,s3,4));	
	return 0;
}

