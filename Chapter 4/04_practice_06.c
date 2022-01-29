#include<stdio.h>

    int main (){ 
    int i=0, n =10 , sum=0;
//    for(int i=0 ; i <=n ; i++){
//        sum=sum+i;
//    }

    do{
        sum=sum+i;
        i++;
        
    }while(i<=10 );
    printf("the value of first ten natural no. is %d\n",sum );
    return 0; 
}