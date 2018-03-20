#include <stdio.h>
#include <unistd.h>
int my_strlen(const char *s)；

char *my_strupcase(char *str);

int my_getnbr_base(char const *str,char const *base)
{
	int len = my_strlen(str);
	int n = my_strlen(base);
	my_strupcase(str);
	int t,t1 = 0;
	int i =0;
	int a = 1;
	while(str[i]=='+'||str[i]=='-')
	{
		if(str[i]=='-'){a=a*-1;}
	}
	for(;i<len;i++)
	{
		if(a[i] - '0' >= n && a[i] < 'A' || a[i] - 'A' + 10 >n ){return 0;}
		if(a[i] >='0' && a[i] <= '9'){t = a[i] - '0';}
        	else if (n >=11 && (a[i] >= 'A' && a[i] <= 'A' +n -10)){t = a[i] - 'A' +10; }
            
        	t1 = t1 *n +t;
	}
	t1=t1*a;
	return t1;
	
}


