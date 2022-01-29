#include <stdio.h>

int main()
{

    // int a=0 ;
    float a;
    scanf("%f",&a);

    while (a <= 20)
    {
        if (a >= 10)
        {
            printf("the natural no. 10 to 20 is %f\n ", a);
            
        }
        a++;
    }
    return 0;
}