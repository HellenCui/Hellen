#include<stdio.h>
#include<unistd.h>

int my_putchar(char c)
{
	write(1, &c, 1);
}


int my_print_comb2(void)
{

	for (int i = 0; i <= 9; i++)
	{

		for (int j = 0; j <= 9; j++)
		{
			for (int k = 0; k <= 9; k++)
			{
				for (int l = 0; l <= 9; l++)
				{
					if (i <= k && l>j)
					{
						char I = i + '0';
						char J = j + '0';
						char K = k + '0';
						char L = l + '0';
						my_putchar(I);
						my_putchar(J);
						my_putchar(K);
						my_putchar(L);
						if (i == 9 && j == 8 && k == 9 && l == 9)
						{
							my_putchar('\n');
							continue;
						}
						my_putchar(',');
					}

					else
						continue;
				}
			}
		}
	}
}