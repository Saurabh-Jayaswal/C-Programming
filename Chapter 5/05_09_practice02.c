#include<stdio.h>
int faherenhiet(int c );
    int main (){ 
float a; 
float celcius ;
printf("enter the value of celcius is \n ");
scanf("%f",&celcius);
a = faherenhiet(celcius);
printf("the temperature in faherenhiet is %f\n",a);
       return 0; 
}
int faherenhiet(int c ){
    int result ;
    result = (c*9/5)+32;
    return result ;
}