#include<stdio.h>
int my_compute_power_it (int nb,int p ){
	int n=1,i;
	if(p == 0){
		n = 1;	
	}else if(p<0){
		n = 0;
	}else{
		for(i = p;i > 0;i--){
			n = n*nb;
		}
	}
	return n;
}
void main(){
	int n,nb,p;
	printf("please input the number");
	scanf("%d %d",&nb,&p);
	n = my_compute_power_it(nb,p);
	printf("%d",n);
	system("pause");
}