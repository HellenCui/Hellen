#include<stdio.h>

char *my_strncpy(char *dest, char const *src, int n){
    if(dest == NULL || src == NULL){
        return NULL;
    }   
    char *p = dest;
    
    int i=0;
    
    

    for(;i<n;i++,src++,dest++){
	
	*dest = *src;
	
    }   
    if (*src!='\0')
    {
	*dest = '\0';
    } 
    
    return p;
}




