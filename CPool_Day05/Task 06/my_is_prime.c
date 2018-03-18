#include<stdio.h>
int my_is_prime(int nb){
	int i;
	if(nb ==1){
		return 1;
	}
	for(i=2;i<=nb/2;i++){
		if(nb%i==0){
			return 0;
		}
	}
	return 1;
}
void main(){
	int n,nb,p;
	printf("please input the number");
	scanf("%d",&nb);
	n = my_is_prime(nb);
	printf("%d",n);
	system("pause");
}