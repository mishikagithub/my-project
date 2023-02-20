#include<stdio.h>  
 int main()    
{    
int a=3, b=4,c;  
  
printf("Before swap a=%d b=%d",a,b);  
//swap without using third variable    
// a=a+b;//a=30 (10+20)    
// b=a-b;//b=10 (30-20)    
// a=a-b;//a=20 (30-10)
c=a;
a=b;
b=c;    
printf("\nAfter swap a=%d b=%d",a,b);    
return 0;  
}   