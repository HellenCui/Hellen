#include<stdio.h>
#include<unistd.h>
int my_compute_factorial_it (int nb){
	int n=1,i;
	if(nb == 0||nb == 1){
		n = 1;	
	}else if(nb<0){
		n = 0;
	}else{
		for(i = nb;i > 0;i--){
			n = n*i;
		}
	}
	return n;
}

/*void main(){
	int n,nb;
	printf("please input the number");
	scanf("%d",&nb);
	n = my_compute_factorial_it(nb);
	printf("%d",n);
	system("pause");
}*/