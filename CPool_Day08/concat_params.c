#include<stdio.h>
#include <unistd.h>
#include<stdlib.h>
#define	EXIT_SUCCESS	0


int my_putstr(char const *str) 
{
	int i = 0;
	while (str[i]!='\0')
	{i++;}
	write(1, str, i);
	return 0;
}


char *concat_params(int argc,char **argv)
{	
	int i =0;
	char *p=(char *)malloc(20);
	char *k=p;
	for(;i<argc;i++)
	{
		char *q =*argv;
		while(*q)*p++=*q++;
		*p++='\n';
		*argv++;
	}
	return k;
}


