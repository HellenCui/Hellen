#include <stdio.h>
#include <unistd.h>
int my_putstr(char const *str) 
{
	int i = 0;
	while (str[i]!='\0')
	{
		i++;
	}
	write(1, str, i);
	return 0;
    
}
void my_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

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

int main(int argc, char *argv[])
{
	char *ch[argc];
	char *temp;
	
	for(int i=0;i<argc-1;i++)
	{
		for(int j=i+1;j<argc;j++)
		{	
			if(my_strcmp(argv[i],argv[j])>0)
			{
				
				temp=argv[i];
                		argv[i]=argv[j];
                		argv[j]=temp;
			}
		}
	}
	for(int i = 0; i < argc; i++)
	{
		my_putstr(argv[i]);
		my_putchar('\n');
	}
	return 0;	
}
