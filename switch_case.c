#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter four number");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    // for three no
    switch (a>b)
    {
    case 0:switch (a>c)
    {
    case 1:printf("a is greater");
        break;
        case 0:printf("c is greater");
        break;
    }
    case 1:switch (b>c)
    {
    case1:printf("b is greater");
        break;
        case 0:printf("c is greater");
        break;
    }    
    // for four number
    
    switch (a>b)
    {
   case 0:switch (a>c)
    {
   case 1:switch (a>d)
    {
    case 0: printf("a is grater");
   break;
    case 1:printf("d is greater");
        break;
    }
    switch (b>c)
    {
    case 0:switch(b>d){
        case 1:switch(b>a){
        case 0:printf("b is greater");
        break;
        case 1:printf("a is greater");
         break;
    }
    }
    }
    switch(c>d){
        case 0:switch(c>a){
            case 1: switch(c>b){
                case 0:printf("c is greater");
                break;
                case 1:printf("b is greater")
                break;
            }
            switch(d>a){
                case 0:switch(d>b){
                    case 1:switch(d>c){
                        case0:printf("d is grater");
                        break;
                        case1:printf("c is greater");
                        break;
                    }
                }
            }
            
        }

    }
       
    
    }
    }
    
        case 0:switch(d>a){
    case 1:printf("d is greater"); break;
    
    case 1:printf("a and d are equal and greater");break;
   
    }
        
        case 0:switch (c>a)
        {
        case 1:switch (c>d)
        {
        case 0:printf("a is greater"); 
            break;
        
      case 1:switch (d>c)
      {
      case 1:printf("d is grater");
          break;
          case0:printf("d and c are equal"); break;
      
    
    
    return 0;
}
