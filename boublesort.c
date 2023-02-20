#include<stdio.h>
int main(){
   int i,j,swap,n;
   n=5;
   int a[5]={24,13,14,4,3,12};
   
    for ( i = 0; i < n-1; i++)
    {
       for(j=0; j<n-1-i; j++){
           if (a[j]>a[j+1])
           {
            swap = a[j];
            a[j] = a[j+1];
            a[j+1] = swap;
           }
           
       }
    }
 
   printf("sort array in ascending order\n");
    for ( i = 0; i < n; i++)
        printf("%d\n",a[i]);
    
     return 0;
}
