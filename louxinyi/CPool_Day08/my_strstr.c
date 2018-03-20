#include<stdio.h>

int my_strlen(const char *s)
{
	int len=0;
	while((*s++)!='\0')
	len++;
	return len;
}

char *my_strstr(char *str, char const *to_find)

{

char *pstr = str;

char *pto_find = (char*)to_find;

int i = 0, j = 0, k = 0;

while (i < my_strlen(str) && j < my_strlen(to_find))

{

if (*(pstr + i) == *(pto_find + j))

{

i++;

j++;

}

else

{

j = 0;

k++;

i = k;//k用来记录原来i的位置

}

}

if (j >= my_strlen(to_find))   //判断找到子字符串的条件

{

//printf("找到子字符串:%s\n",to_find);

return (pstr+k);
//return &pstr[k];

}

else

{

//printf("没有找到子字符串:%s\n", to_find);

return NULL;

}

}

 

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
 


