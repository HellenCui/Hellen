#include<stdio.h>
#include<unistd.h>
int my_compute_power_rec (int nb,int p ){
	int n=1,i;
	if(p == 0){
		n = 1;	
	}else if(p<0){
		n = 0;
	}else{
		
			n = nb*my_compute_power_rec(nb,p-1);
		
	}
	return n;
}
/*void main(){
	int n,nb,p;
	printf("please input the number");
	scanf("%d %d",&nb,&p);
	n = my_compute_power_rec(nb,p);
	printf("%d",n);
	system("pause");
}*/