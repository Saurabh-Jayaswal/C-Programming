#include<stdio.h>

    int main (){ 
int arrays[10];
// int *ptr = &arrays[0];
int *ptr = arrays;
 ptr = ptr+2 ;

 if(ptr==&arrays[2]){
     printf("these are point to the same pointer in memory \n ");
 }
else
{
    printf("these are do not  point to the same pointer in memory \n ");
}

    return 0; 
}