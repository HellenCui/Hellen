#include<stdio.h>
char *my_strncat(char *dest,char *src，int nb)
{
	char *p=dest,*q=src;
	while(*p) p++;
	
	while(*q&&nb){*p++=*q++;--nb;}
	*p='\0';
	return dest;
}
