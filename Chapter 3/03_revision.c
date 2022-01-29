#include<stdio.h>

    int main (){ 
int a ;
int b ;
int c ;
printf("enter the marks of a \n");
scanf("%d",&a);
printf("enter the marks of b \n");
scanf("%d",&b);
printf("enter the marks of c \n");
scanf("%d",&c);
 float t = (a+b+c)/3 ;
 
if(a>33 && b>33 && c>33 && t>40){
    printf("you are pass with percentage %f percent \n",t);
}
else{
    printf("you are fail \n");
}


    return 0; 
}