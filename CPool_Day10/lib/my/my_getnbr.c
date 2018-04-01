#include <stdio.h>
#include <unistd.h>

int my_getnbr(char const *str)
{
	long int value;
	value = 0;
	int i = 1;
	char const *n;
	n = str;
	while (*n != '\0')
	{
		if (!(*n >= '0' && *n <= '9')&&(*n != '-' && *n != '+'))
		{
			break;
		}
		if (*n == '-')
		{
			i = i * -1;
			n++;
		}
		if (*n == '+')
		{
			i = i * 1;
			n++;
		}
		if (*n >= '0' && *n <= '9')
		{
			value = value * 10 + (*n - '0');
			n++;
		}
	}
	if (value < -2147483648 || value > 2147483647)
	{
		return 0;
	}
	return (value * i);
}