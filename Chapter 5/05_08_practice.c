#include<stdio.h>
int sum ( int a,int b,int c);
    int main (){ 
      int d ;
    d =  sum ( 2,3,4 );
printf("the avg. value of number is %d \n ",d/3);

    
    return 0; 
}

int sum ( int a,int b,int c){
int result ;
result = (a+b+c);
return result;
}