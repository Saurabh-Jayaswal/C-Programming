#include<stdio.h>

    int main (){ 
    //  char str[]= "SAURABH";
    char str[] = { 'S','A', 'U', 'R', 'A', 'B','H','\0'};
     char *ptr = str ; 
     while(*ptr != '\0' ){
         printf("%c",*ptr);
         ptr++;
     }
    return 0; 
}