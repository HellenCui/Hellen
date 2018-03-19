#include<stdio.h>
int my_strlen(char const *str) {
	int i = 0;
	
	while (str[i] != '\0')
	{

		i = i++;

	}
	return i;

}
void my_evil_str(char *str,int len) {
	for (int i = 0, j = len - 1; i<j; i++, j--) {
		char c = str[i];
		str[i] = str[j];
		str[j] = c;
	}

}

void main()
{
	char str[50];
	printf("please input\n");
	gets(str);
	int count = my_strlen(str);
	my_evil_str(str, count);
	printf("%s", str);
	system("pause");

}