#include<stdio.h>
int main()
{ 
     int a;
     int b;
     int c;
     printf("enetr the value of a\n");
     scanf("%d",&a);
     printf("enetr the value of b\n");
     scanf("%d",&b);
     printf("enetr the value of c\n");
     scanf("%d",&c);
     if (a>b and a>c){
          printf("a is largest\n");
     }
     else if(b>a and b>c){
          printf("b is largest\n");
     }
     else{ 
          printf("c is largest\n");
     }
     return 0;
} 