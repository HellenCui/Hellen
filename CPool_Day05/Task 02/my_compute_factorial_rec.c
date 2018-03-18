#include<stdio.h>
int my_compute_factorial_rec (int nb){
	int n=1;
	if(nb == 0||nb == 1){
		n = 1;	
	}else if(nb<0){
		n = 0;
	}else{
		n = my_compute_factorial_rec(nb - 1) * nb;
	}
	return n;
}

void main(){
	int res,nb;
	printf("please input the number");
	scanf("%d",&nb);
	res = my_compute_factorial_rec(nb);
	printf("%d",res);
	system("pause");
}