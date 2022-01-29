#include <stdio.h>
void sumANDavg(int a, int b , int *sum , float *avg ){
    *sum = a + b ; 
    *avg = (float)*sum / 2 ;
}

int main()
{
    int a ,b, sum ;
    float avg ; 
    a = 6 ;
    b = 3 ; 

sumANDavg( a, b, &sum , &avg );
printf("the value of sum is %d \n ", sum);
printf("the value of avg  is %f \n ", avg );


    return 0;
}