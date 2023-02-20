#include<stdio.h>
int main(){
     int i, n,factorial=1;
  
    printf("enter the number\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
     factorial = factorial*i;
    }
    
    printf("factorial nummber of %d is %d\n", n,factorial);
   return 0;
}
