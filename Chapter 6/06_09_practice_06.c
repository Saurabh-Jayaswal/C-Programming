#include<stdio.h>
int mul(int a , int b);
    int main (){ 
    int a = 10 ;
    int b = 4;
       printf("the function value before ten times is %d \n " , b);
     printf("the function value after  ten times is %d \n " , mul(a,b)) ;


    return 0; 
}
int mul(int a , int b){
  int  result ;
  result = a*b ;
  return result ; 
}