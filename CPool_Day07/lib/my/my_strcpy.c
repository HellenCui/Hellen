#include<stdio.h>

char *my_strcpy(char *dest, char const *src) {
	if (dest == NULL || src == NULL) {
		return NULL;
	}
	char *p = dest;

	int i = 0;



	for (; src[i]!='\0'; i++, src++, dest++) {

		*dest = *src;

	}
	if (*src != '\0')
	{
		*dest = '\0';
	}

	return p;
}




