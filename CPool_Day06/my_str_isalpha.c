#include <stdio.h>
char *my_str_isalpha(char const *str)
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(!((str[i]>=97 && str[i]<=122) || (str[i]>='A' && str[i]<='Z')))
		{
			return 0;
		}
	}
	return 1;
}

