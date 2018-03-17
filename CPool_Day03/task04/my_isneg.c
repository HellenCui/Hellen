#include<stdio.h>
int my_isneg(int n) {										//Define functions

	if (n >= 0) {											//Judging positive and negative
		printf("%c", 'P');
	}
	else {
		printf("%c", 'N');
	}


}
void main()
{
	int n;

	printf("please input the number\n");					//Enter the number to be judged
	scanf_s("%d", &n);
	my_isneg(n);
	system("pause");
}
