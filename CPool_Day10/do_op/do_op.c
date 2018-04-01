#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"

int do_op(char *str1, char *op, char *str2)
{
	int	n1;
	int	n2;
	int	ans;
	int len1 = my_strlen(str1);
	int len2 = my_strlen(str2);
	
	if((str1 == NULL || str2 == NULL) || (len1 ==0 || len2 ==0)) return 84;
	else if(!(op[0] == '%' || op[0] == '*' || op[0] == '+' || op[0] == '-'  || op[0] == '/')){
		my_put_nbr(0);
		my_putstr("\n");
		return 84;
	}
	else{
		n1 = my_getnbr(str1);
		n2 = my_getnbr(str2);
		
		if (op[0] == '+') ans = n1 + n2;
		if (op[0] == '-') ans = n1 - n2;
		if (op[0] == '*') ans = n1 * n2;
		if (op[0] == '/'){
			if(n2 == 0){
				my_putstr("Stop: division by zero");
				my_putstr("\n");
				return (84);
			}
			else
				ans = n1 / n2;
		}
		if (op[0] == '%'){
			if(n2 == 0){
				my_putstr("Stop: modulo by zero");
				my_putstr("\n");
				return 84;
			}
			else
				ans = n1 % n2;
		}
		
		my_put_nbr(ans);
		my_putstr("\n");
		return 0;
	}
}

// int main(int argc, char **argv)
// {
	// if (argc == 4)
	// {
		// if(do_op(argv[1], argv[2], argv[3]) == 0)
			// return 0;
		// return 84;
	// }
	// return 84;
// }
