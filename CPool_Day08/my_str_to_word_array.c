#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int my_strlen(char const *str) {
	int i = 0;
	while (str[i] != '\0')
	{i++;}
	return i;
}

char **my_str_to_word_array(char const *str)
{
	int len =my_strlen(str);
	char **arr=(char **)malloc(len+1);
	int i = 0;
	int c;
	int pun = 0;
	for(int i=0;i<len;i++)
	{
		arr[pun] = malloc(sizeof(char **) * my_strlen(str));
		while(!((str[i]>='0'&&str[i]<='9')||(str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')))
			i++;
		c=0;
		while(((str[i]>='0'&&str[i]<='9')||(str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')))
		{
				
				arr[pun][c] = str[i];
				i++;
				c++;
		}
		pun++;	
		
		
	}
	arr[pun] = 0;
	
	return arr;
}






