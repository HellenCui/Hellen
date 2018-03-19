#include<stdio.h>
int my_print_digits(void) {									//Define functions
	for (int i = 0; i < 10; i++) {							//Cycle 10 times
		char c;
		c = (char)(48 + i);									//beginning with 0
		printf("%c", c);
	}

	return 0;

}
void main()
{
	my_print_digits();									   //Call functions
	system("pause");
}
