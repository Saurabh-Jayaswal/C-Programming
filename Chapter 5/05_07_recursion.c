#include<stdio.h>
int factorial(int x);
    int main (){ 
        int a = 4 ;
        printf("the factorial  of n %d is %d",a , factorial(a));
    
    return 0; 
}

int factorial(int x ){
    if(x == 0 || x == 1 ){
        return 1 ; 
    }
    else{return x * factorial(x-1);
    }
}