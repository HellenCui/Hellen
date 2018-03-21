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


int main(int argc, char * argv[])
{
    int i;
	
	
    for (i = 0; i < argc; i++)
	{
		my_putstr(argv[i]);
		my_putchar('\n');
	}
        
    return 0;
}
