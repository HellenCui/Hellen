#include<stdio.h>
#include <unistd.h>
int my_putstr(char const *str) {
	int i = 0;
	//printf("%s", str);

	while (str[i]!='\0')
	{
		//printf("%c ",str[i]);
		write(1, str, i);
		i = i++;

	}
	return 0;
    
}