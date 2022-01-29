#include <stdio.h>

int main()
{
    int i = 5;
    printf("the value of i++ is %d\n", i++);
    ++i;
    // i++ and ++i both are different  i++ mean phele print kare fir increement kare and for ++i is vice versa
    printf("the value of i++ is %d\n", i++);
    i += 10; // a is increment by 10
    printf("the value of i++ is %d\n", i);

    return 0;
}