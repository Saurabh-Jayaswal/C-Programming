#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number,guess ,nguess=1;
    srand(time(0)); // because we want always new no. 
    number = rand()%100 + 1 ; // random no genrates between 1 to 100 
     printf("the number is % d",number );


// // using loop no is guess when the no is correct 
// do{
//     printf("guess the no b/w  1 to 100 \n ");
// scanf("%d",&guess);
// if(guess>number){
//     printf("Lower  number please !\n ");
// }
// else if(guess<number){
//     printf("higher number please ! \n");
// }
// else {
//     printf("you guessed  it  in %d  attempts \n ",nguess);
// }
// nguess++;

// }while(guess!= number);
    return 0;
}