#include <stdio.h>
int my_str_isprintable(char const *str);
int my_putnbr_base(int nbr, char const *base);
int my_showstr(char const *str)
{
	int i;
	char zero = '0';
	char conv = '\\';
	for (i = 0;str[i];i++)
	{
		if(my_str_isprintable(str[i]))
		{
			write(1,&conv,1);
			if(str[i] < 16)
				write(1,&zero,1);
			my_putnbr_base(str[i],"0123456789abcdef");
		}
		else
			write(1,&str[i],1);
	}
	return 0;
}

