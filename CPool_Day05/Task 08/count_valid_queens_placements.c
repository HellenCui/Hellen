#include <stdio.h>  
#include <math.h>  

  

int n;            //皇后个数  
int sum=0;        //可行解个数  
  
int place(int k,int x[n])  
{  
    int i;  
    for(i=1;i<k;i++)  
       if(abs(k-i)==abs(x[k]-x[i])||x[k]==x[i])  
           return 0;  
       return 1;  
}  
int count_valid_queens_placements(int k,int x[n])
{
    int i;
    if(k>n)
        sum++;
    else
       for(i=1;i<=n;i++)
       {
           x[k]=i;
           if(place(k,x[n]))
               count_valid_queens_placements(k+1,x[n]);
       }
       return sum;
}  
void main()
{
    printf("Please input n:(n<15)");  
    scanf("%d",&n);  
	int x[n]; 
    printf("%d\n",queen(1,x[n]));  
    return 0;  
}