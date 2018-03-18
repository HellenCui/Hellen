#include<stdio.h>
void swap(int *a, int *b)
{
	int p;
	p = *a;
	*a = *b;
	*b = p;
}
int main()
{
	int a = 5, b = 9;
	int *p1, *p2;
	p1 = &a;
	p2 = &b;
	swap(p1, p2);
	printf("%d %d\n", a, b);
	system("pause");
}