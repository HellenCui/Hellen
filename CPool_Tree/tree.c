#include<stdio.h>
#include<unistd.h>

int my_putchar(char c);

void tree(int size)
{
	int H = 4;
	int Z = 1;

	int len = (add_h(size) - del_h(size)) * 2 - 1;
	//printf("%d", len);
	int half = len / 2 + 1;
	//printf("%d", len);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < H; j++)
		{
			for (int k = 0; k < half - (Z / 2 + 1); k++) {
				my_putchar(' ');
			}
			for (int k = 0; k < Z; k++) {
				my_putchar('*');
			}
			my_putchar('\n');
			Z = Z + 2;

		}
		H++;
		Z = Z - ((i / 2) + 2) * 2;
	}
	for (int i = 0; i < size; i++)
	{

		for (int k = 0; k < half - (size / 2 + 1); k++) {
			my_putchar(' ');
		}
		for (int k = 0; k < size; k++) {
			my_putchar('|');
		}
		my_putchar('\n');
	}
}

int del_h(int size)
{
	int del_sum = 0;
	for (int i = 0; i < size - 1; i++)
	{
		del_sum = del_sum + (i / 2) + 2;
		//printf("%d\n", del_sum);
	}
	return del_sum;
}

int add_h(int size)
{
	int add_sum = 0;
	for (int i = 1; i <= size; i++)
	{
		add_sum = add_sum + 3 + i;
		//printf("%d\n", add_sum);
	}
	return add_sum;
}
