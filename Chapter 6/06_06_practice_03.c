#include<stdio.h>

    int main (){ 
    int a = 4 ;
    printf("the function value before ten times is %d \n " , *(&a));
     printf("the function value after  ten times is %d \n " , *(&a)* 10);
    return 0; 
}
