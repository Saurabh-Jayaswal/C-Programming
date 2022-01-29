#include <stdio.h>

int main()
{
    int a;
    int i = 2;

    printf("Enter the integer value of a \n ");
    scanf("%d", &a);

    while (i < a)
    {  
        if (a % i == 0 )
        {
            printf("the number is  not prime no. \n");
             
        }
     
        else
        {
            printf("the number is prime no. \n ");
            break;
        }
        i++;
        
   
     
    }

    return 0;
}

