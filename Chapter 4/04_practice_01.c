#include <stdio.h>

int main()
{
    int n;
    int a = 1;
    printf("Enter  the integer value of n  is \n");
    scanf("%d", &n);

    while (a <= 10)
    {
        printf("multiplication table of n is %d\n", a * n);
        a++;
    }

    return 0;
}