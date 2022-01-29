#include<stdio.h>

int main(){
    int a = 4; // Type declaration instruction
    int a = 4, b, c; // Type declaration instruction
    b = c = a; // if this is return as a=b=c then it is wrong 
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    printf("The value of c is %d\n", c);

    float a = 1.1;
    float b = a + 8.9;
    printf("The value of b is %f\n", b);



    return 0;
}