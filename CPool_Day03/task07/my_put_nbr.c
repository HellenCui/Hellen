#include<stdio.h>
int my_put_nbr(int nb){														//Define functions

	printf("%d",nb);														//Output parameters

	return 0;

}
void main()
{
	int nb;
	printf("please input the number or symbol\n");
	scanf_s("%d",&nb);
	my_put_nbr(nb);
	system("pause");
}
