#include <stdio.h>
int my_strcmp(char const *s1,char const *s2)
{
	
	if((s1 != NULL) && (s2 != NULL))
	{
        while(*s1 && *s2 && (*s1 == *s2))
        {
              s1++;
              s2++;
        }
	}
        return *s1-*s2;
}

