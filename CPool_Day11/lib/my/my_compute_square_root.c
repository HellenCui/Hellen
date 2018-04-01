#include<stdio.h>
#include<unistd.h>
int my_compute_square_root(int nb){
	int i;
	if(nb ==1){
		return 1;
	}
	for(i=1;i<=nb/2;i++){
		if(i*i==nb){
			return i;
		}
	}
	return 0;
}
/*void main(){
	int n,nb,p;
	printf("please input the number");
	scanf("%d",&nb);
	n = my_compute_square_root(nb);
	printf("%d",n);
	system("pause");
}*/