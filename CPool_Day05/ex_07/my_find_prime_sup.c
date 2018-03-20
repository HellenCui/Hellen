#include<stdio.h>
#include<unistd.h>
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

int my_find_prime_sup(int nb){
	int flag = my_is_prime(nb);
	if(flag ==1){
		return nb;
	}else{
		for(nb;;nb++){
			if(my_is_prime(nb)==1){
				return nb;
			}
		}
	}
}





/*void main(){
	int n,nb,p;
	printf("please input the number");
	scanf("%d",&nb);
	n = my_find_prime_sup(nb);
	printf("%d",n);
	system("pause");
}*/