#include<stdio.h>
int my_strlen(char const *str) {
	int i = 0;
	//printf("%s", str);

	while (str[i] != '\0')
	{
		
		i = i++;

	}
	return i;

}

void main()
{
	char str[50];
	printf("please input\n");
	gets(str);
	int count = my_strlen(str);
	printf("%d",count);
	system("pause");

}