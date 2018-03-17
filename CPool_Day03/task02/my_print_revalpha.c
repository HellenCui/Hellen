#include<stdio.h>
int my_print_revalpha(void) {									//Define functions
	for (int i = 0; i < 26; i++) {								//Cycle 26 times
		char c;
		c = (char)(122 - i);									//beginning with z
		printf("%c", c);
	}

	return 0;

}
void main()
{
	my_print_revalpha();
	system("pause");
}
