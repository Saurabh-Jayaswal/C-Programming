#include<stdio.h>
void printAdd(int a){
    printf("the address  of variable a is %u \n ", &a);
}

    int main (){ 
    int i =6;
     printf("the address of i  is %u \n ",&i);
     printAdd(i);
     printf("the address  of variable i is %u\n ", &i);

    return 0; 
}