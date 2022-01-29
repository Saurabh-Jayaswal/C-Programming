#include <stdio.h>

int main()
{
    float C;
    printf("enter the temp in celsius (C) \n");
    scanf("%f", &C);

    float F = ((9 * C)/5) + 32;
    printf("the temperature in farenhiet is %f\n ", F);
    return 0;
}