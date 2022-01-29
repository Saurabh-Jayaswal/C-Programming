#include<stdio.h>

    int main (){ 
    int i =43;
    int *j = &i;
    int **k = &j;
    printf("the value of i wrt. pointer to pointer is %d ", **k);
    return 0; 
}