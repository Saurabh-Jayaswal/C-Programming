#include<stdio.h>
int sum(int a , int b);
    int main (){ 
    int a=3 ,b=4;
    printf("the sum of a+b is %d\n",sum(a,b));
    printf("the value of a and b is after function call is  %d and %d\n",a,b);
    return 0; 
}
int sum(int a , int b){
    int c;
    c=a+b;
    a=214314;
    b=34234;
// the  value a and b is  not change  
    return c;
}