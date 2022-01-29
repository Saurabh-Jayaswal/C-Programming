#include <stdio.h>
#include <math.h>

int main(){
    int a = 8;
    int b = 4;
    printf("the value of a+b is : %d\n", a + b);
    printf("the value of a-b is : %d\n", a - b);
    printf("the value of a*b is : %d\n", a * b);
    printf("the value of a/b is : %d\n", a / b);

    int z= a*b; // this is legal
    // int a*b =z    this is illegal
    printf("the value of z is : %d\n", z); 
    printf ("the remainder when  7 is divede by 2 is %d\n", 7%2);
    printf ("the remainder when  -7 is divede by 2 is %d\n", -7%2); // the remainder has same sign as numerator
    printf ("the remainder when  7 is divede by -2 is %d\n", 7%-2);   
    // No operator is assumed to be present`
    //printf("The value of 4 * 5 is %d\n", (4)(5)); --> Will not return 20/ Wrong!!
    printf("The value of 4 * 5 is %d\n", (4)*(5));
   // there is no oprator in exponential in c
    printf("The value of 4 ^ 5 is %d\n", (4)^(5));// ye koi expontial operator nahi hota he 
    printf("The value of 4 to the power 5 is %d\n", pow(4,5));
    printf("The value of  2/5 is %d\n", 2/5); // agar perentage d lagaya to greatest integer dega
    printf("The value of  5.0/2 is %f\n", (5.0/2) );
printf("the value of 3.0/9 is %f", (3.0/9));
    return 0;
}