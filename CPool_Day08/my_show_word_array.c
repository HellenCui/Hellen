#include<stdio.h>
#include <unistd.h>
#include<stdlib.h>

int my_putstr(char const *str) 
{
	int i = 0;
	while (str[i]!='\0')
	{i++;}
	write(1, str, i);
	return 0;
}

int my_show_word_array(char * const *tab)
{
	for(int i =0;tab[i]!=0;i++)
	{
		my_putstr(tab[i]);
		my_putstr("\n");
	}
	return 0;
}



