#include <stdio.h>
int fibonachii(int a);
int main()
{
    //this 'a' is different form upper and lower
    int d;
   printf("fibonachii series \n");
   scanf("%d",&d);
   
    return 0;
}
int fibonachii(int a)
{
    if (a == 1)
    {
        return 0;
    }
    else if (a == 2)
    {
        return 1;
    }
    else
    {
        return (fabonachii(a - 1) + fabonachii(a - 2));
    }
}