#include<stdio.h>
int my_print_comb2(void) {														//Define functions

	for (int i = 0; i <= 99; i++) {												//Start selecting numbers and sorting
		for (int j = i + 1; j <= 99; j++) {
			printf("%02d%02d", i, j);
				printf(", ");
		}
	}

	return 0;

}
void main()
{
	my_print_comb2();
	system("pause");
}
