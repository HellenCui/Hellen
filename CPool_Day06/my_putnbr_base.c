#include <stdio.h>
#include <unistd.h>
int my_strlen(const char *str)
{
	int len = 0;
	while(( *str++ ))
	{
		len++;
	}
	return len;
}
int my_putnbr_base(int nbr, char const *base)
{	
	char a = '-';
	if (nbr < 0) 
	{
		nbr = nbr * -1;
		write(1,&a,1);
	}
	int len = my_strlen(base);
	if (nbr > my_strlen(base) - 1) 
	{
		my_putnbr_base(nbr / len, base);
		my_putnbr_base(nbr % len, base);
	} 
	else
		write(1,&base[nbr % len],1);
	return 0;
}

