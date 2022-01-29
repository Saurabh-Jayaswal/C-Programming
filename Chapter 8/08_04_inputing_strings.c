#include<stdio.h>

    int main (){ 
    char s[34] ;
    printf("enter your name :-\n");
    scanf("%s",s); // there is no use of this "&" because we not use &s but we use &s[0] because  & written with address 
    printf("your name is :- %s \n",s);
    return 0; 
} 