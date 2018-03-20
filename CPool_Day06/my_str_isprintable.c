#include <stdio.h>
int my_str_isprintable(char const *str)
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i] < 32 || str[i] > 126)
		{
			return 0;
		}
	}
	return 1;
}
