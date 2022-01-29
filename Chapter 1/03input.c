#include<stdio.h>

int main(){
   int a,b;
   printf("enter the value of a  \n ");
   scanf("%d",&a);

    printf("enter the value of b  \n ");
   scanf("%d",&b); // & is address of b  scan func. is do one thing give him format specifier and address of a

   printf("the sum of a+b is %d\n ",a+b);


return 0;
}