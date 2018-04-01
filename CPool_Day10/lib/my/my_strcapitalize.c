#include <stdio.h>

char *my_strupcase(char *str)
{	
	int i,flag=1;
	for(i=0;str[i]!='\0';i++)
	{
		if(!((str[i]>=97 && str[i]<=122) || (str[i]>='A' && str[i]<='Z')||(str[i]>='0' &&str[i]<='9')))
		{flag=1;continue;}
		if(flag)
		{
			flag=0;
			if(str[i]>='a'&&str[i]<='z')
			{
				str[i]-=32;
			}else if(str[i]>=0 &&str[i]<=9)
			{
				
			}
		}else
		{
			if(str[i]>='A'&&str[i]<='Z')
			{
				str[i]+=32;
			}
			
		}
	}
	
	return str;	
	
}

