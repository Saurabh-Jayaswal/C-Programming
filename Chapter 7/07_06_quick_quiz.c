#include <stdio.h>

int main()
{
    int a = 12;
    int *i = &a;
    int *j = &a;
    //  printf("the value of i before addition is %u \n ", i );
    // //  i++;
    // // i--;

    //  printf("the value of i after addition is %u \n ", i );
    j = j + 3;
    int x;
    x = j - i;
    printf("the address of i  is %u \n ", i);
    printf("the address of j  is %u \n ", j);

    printf("the pointer subtraction  is %d \n ", x);

    return 0;
}