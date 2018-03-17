#include<stdio.h>
int my_print_comb(void) {														//Define functions

	for (int i = 0; i <=9; i++) {												//Start selecting numbers and sorting
		for (int j = i + 1; j <= 9; j++) {
			for (int k = j + 1; k <= 9; k++) {
				printf("%d%d%d", i, j, k);
				if (i != 7) 
					printf(", ");
			}
		}
	}

	return 0;

}
void main()
{
	my_print_comb();
	system("pause");
}
