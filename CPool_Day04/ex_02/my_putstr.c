#include<stdio.h>
int my_putstr(char const *str) {
	int i = 0;
	//printf("%s", str);

	while (str[i]!='\0')
	{
		printf("%c ",str[i]);
		i = i++;

	}
	return 0;
    
}

void main()
{
	char str[50];
	printf("please input\n");
	gets(str);
	my_putstr(str);
	system("pause");
	
}