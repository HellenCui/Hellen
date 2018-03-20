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
int my_strlen(const char *str)
{
	int len = 0;
	while(( *str++ ))
	{
		len++;
	}
	return len;
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
	
	//write(1,&str[0],1);
	write(1,":\t",1);
	char ostr[size];
	//
	char *base = "0123456789abcdef";
	for(int i=0;str[i]!='\0';i++)
	{	
		
		
		my_putnbr_base(str[i],base);
		if((i+1)%2==0)
		{write(1," ",1);}
	}
	write(1,&ostr,size);
	return 0;	
}
void main()
{
	char ch[16]="1247626ghjok9ajt";
	my_showmem(ch,16);
}
