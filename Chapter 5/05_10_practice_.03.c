#include<stdio.h>
float force(float c );
    int main (){ 
float a;
float mass  ;
printf("enter the value of mass  is \n ");
scanf("%f",& mass );
a = force(mass);
printf("the force exerted by mass  is %f\n",a);
       return 0; 
}
float force(float c ){
    float result ;
    result = c*(9.8);
    return result ;
}