#include <stdio.h>

int main()
{
    int i = 34;
    int *j = &i; // j  will now the address of i
    int **k;
    k = &j;
    printf("the value of i is %d \n ", i);
    printf("the value of j is %d \n ", *j);
    printf("the address of i  is %d\n ", &i);
    printf("the address of j is %d \n ", j);
    printf("the address of j is %u \n ", &j);
    printf("the value of j is %d \n ", *(&j));
    printf("the address of k is %u \n ", &k);
    return 0;
}