#include<stdio.h>
int my_print_alpha(void) {									//Define functions
	for (int i = 0; i < 26; i++) {							//Cycle 26 times
		char c;
		c = (char)(97 + i);									//beginning with a
		printf("%c", c);
	}

	return 0;

}
void main()
{
	my_print_alpha();
	system("pause");
}
