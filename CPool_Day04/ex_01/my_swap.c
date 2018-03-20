#include<stdio.h>
void swap(int *a, int *b)
{
	int p;
	p = *a;
	*a = *b;
	*b = p;
}
