#include <stdio.h>
#include <stdlib.h>
#include "./include/my.h"

int my_advanced_sort_word_array(char **tab, int(*cmp)(char const *, char const *)){
	int len = 0;
	char **tmp = tab;
	int i = 0;
	int j = 0;
	
	while(*tmp != 0){
		len++;
		tmp++;
	}
	
	while(i < len - 1){
		while(j < len - i - 1){
			if((*cmp)(*(tab + j), *(tab + j + 1)) > 0){
				char *tmp2 = *(tab + j);
				*(tab + j) = *(tab + j + 1);
				*(tab + j + 1) = tmp2; 
			}
			j++;
		}
		i++;
	}
	return 0;
}