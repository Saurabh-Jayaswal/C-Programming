#include<stdio.h>
#include<math.h> 
    int main (){ 
    int a ;
    printf("enter the value of a  \n ");
   scanf("%d",&a);

printf("the area of square is %f\n", pow(a,2));// we not use the %d because we use such library that are use in double and float 
    return 0; 
}