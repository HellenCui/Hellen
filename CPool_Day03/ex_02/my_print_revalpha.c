#include<stdio.h>
#include<unistd.h>
int my_print_digits(void) {
	for (int i = 0; i < 10; i++) {
		char c;
		c = (char)(48 + i);
		write(1, &c, 1);
	}
	return 0;
}
void main()
{
	my_print_digits();
}