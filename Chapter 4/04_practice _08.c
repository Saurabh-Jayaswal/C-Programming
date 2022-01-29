#include<stdio.h>

    int main (){ 
    int n  , multiply = 1 ;
    printf("Enter the value of n is\n");
    scanf("%d",&n);

    // while (i<=n )
    // {
    //     multiply=multiply *i;
    //     i++;
    // }
    for(int i=1 ; i<=n ;i++ ){
        multiply*=i;
    }
    printf("the value of n factorial is %d \n",multiply);

    return 0; 
}