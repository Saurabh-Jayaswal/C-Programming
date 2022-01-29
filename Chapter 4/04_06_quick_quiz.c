#include<stdio.h>

    int main (){ 
    int i=1;
    int n;
    printf("entrer the value of n \n");
    scanf("%d",&n);

    do{
        printf("the first n natural no is %d\n",i);
        i++;
    } while(i<n);
    return 0; 
}