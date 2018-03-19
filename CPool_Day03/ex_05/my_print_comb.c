#include<stdio.h>
#include<unistd.h>
void my_putchar(char c)
{
	write(1, &c, 1);
}

int my_print_comb(void) {
	for (int i = 0; i <= 9; i++) {
		for (int j = i + 1; j <= 9; j++) {
			for (int k = j + 1; k <= 9; k++) {
				char I = i + '0';
				char J = j + '0';
				char K = k + '0';
				my_putchar(I);
				my_putchar(J);
				my_putchar(K);
				my_putchar(',');
				my_putchar(' ');
			}
		}
	}
}
