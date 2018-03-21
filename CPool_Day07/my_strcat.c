#include<stdio.h>
char *my_strcat(char *dest,char *src)
{
	char *p=dest,*q=src;
	while(*p) p++;
	while(*q)*p++=*q++;
	*p='\0';
	return dest;
}
