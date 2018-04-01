#include <stdio.h>

char *my_strupcase(char *str)
{	
	
	if(str !=NULL)
	{
		int i;
		for(i=0;str[i]!='\0';i++)
		{
			if(str[i]>='A' && str[i]<='Z')
			{
				str[i]=str[i]+32;
			}
		}
		
		return str;	
	}else
		return NULL;
}

