#include<stdio.h>
int my_strlen(char const *str) {
	int i = 0;
	//printf("%s", str);

	while (str[i] != '\0')
	{
		
		i = i++;

	}
	return i;

}