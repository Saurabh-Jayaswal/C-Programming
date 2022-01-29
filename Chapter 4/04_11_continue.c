#include <stdio.h>

int main()
{
    int b = 5;
    int i = 0;
    while (i < 10)
    {

        if (i != b)
            continue;
        else
            printf("%d", i);
        i++;
    }
    return 0;
}