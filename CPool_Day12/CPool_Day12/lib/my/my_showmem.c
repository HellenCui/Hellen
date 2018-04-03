#include <stdio.h>
#include <unistd.h>

int my_str_isprintable(char const *str)
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i] < 32 || str[i] > 126)
		{
			return 0;
		}
	}
	return 1;
}
int my_strlen(char const *str) {
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}
int my_putnbr_base(int nbr, char const *base)
{
	char a = '-';
	if (nbr < 0) 
	{
		nbr = nbr * -1;
		write(1,&a,1);
	}
	int len = my_strlen(base);
	if (nbr > my_strlen(base) - 1) 
	{
		my_putnbr_base(nbr / len, base);
		my_putnbr_base(nbr % len, base);
	} 
	else
		write(1,&base[nbr % len],1);
	return 0;
}


int my_showmem(char const *str,int size)
{
	int len=my_strlen(str);
	
	write(1,":\t",2);
	char *base = "0123456789abcdef";
	for(int i=0;i<size;i++)
	{	
		
		int value = str[i];		
		
		my_putnbr_base(str[i],base);
		if((i+1)%2==0)
		{write(1," ",1);}
	}
	for(int i =0;i<my_strlen(str);i++)
	{
		if(str[i] < 32 || str[i] > 126)
		{
			//str[i]='.';
			write(1,".",1);
			continue;
		}
		write(1,&str[i],1);
	}
	write(1,"\n",1);
	return 0;
}

char *my_strcpy(char *dest, char const *src){
    if(dest == NULL || src == NULL){
        return NULL;
    }   
    char *p = dest;
    
    int i=0;
    
    

    for(;src[i]!='\0';i++,src++,dest++){
	
	*dest = *src;
	
    }   
    *dest = '\0';
    
    
    return p;
}
int my_putstr(char const *str) {
	int i = 0;
	while (str[i]!='\0')
	{
		i++;
	}
	write(1, str, i);
	return 0;
    
}
void main()
{
	char *ch="1247626ghjok9ajt";
	printf("%p\n",&ch);
	
	my_showmem(ch,16);
	
	
}
