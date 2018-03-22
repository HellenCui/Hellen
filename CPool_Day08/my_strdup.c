#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int my_strlen(char const *str) {
	int i = 0;
	while (str[i] != '\0')
	{i++;}
	return i;
}
char *my_strcpy(char *dest,char const *src)
{	
	if (dest == NULL || src == NULL) 
	{return NULL;}
	char *p = dest;
	while((*dest++=*src++)!='\0')
		NULL;
	return p;
}
char *my_strdup(char const *src)
{	
	
	char *p = malloc(sizeof(char)*(my_strlen(src)+1));
	my_strcpy(p,src);
	
	return p;
}

