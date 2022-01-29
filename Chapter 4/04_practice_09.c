#include<stdio.h>

    int main (){ 
    int n = 4 ;
    for(int i=2  ; i<n ; i++){
        if(n%i == 0 && n!=2  ){
            printf("the no. is not prime \n ");
        }
        else{
            printf("the no  is prime no. \n");
    }
        break;
    }

    return 0; 
}