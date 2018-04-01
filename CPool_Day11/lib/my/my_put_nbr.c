#include<stdio.h>
#include<unistd.h>

int my_put_nbr(int nb)
{
	if (nb >= 10)
	{
		my_put_nbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10 && nb >= 0) {
		my_putchar(nb + '0');
	}
	if (nb < 0)
	{
		int i = -1 * nb;
		my_putchar('-');
		if (i >= 10)
		{
			my_put_nbr(i / 10);
			i = i % 10;
		}
		if (i < 10 && i >= 0)
		{
			my_putchar(i + '0');
		}
	}
	return 0;
}
