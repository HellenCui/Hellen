#include <stdio.h>
int my_strlen(const char *s)
{
	int len=0;
	while((*s++)!='\0')
	len++;
	return len;
}

char *my_revstr(char *str)
{	
    int len=my_strlen(str);
    char *start = str;
    char *end = str + len - 1;
    char ch;
    if (str!= NULL)
    {
    while (start < end)
    {
        ch = *start;
        *start++ = *end;
        *end-- = ch;
        }
    }
    
    return str;
}





