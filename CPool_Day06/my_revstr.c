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
