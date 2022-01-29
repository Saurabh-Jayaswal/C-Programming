#include <stdio.h>

int main()
{
  int a = 6;
  int *b;
  b = &a;
  printf("the address of a is %u \n", &a);
  printf("the value of  variable  a is %d \n", *(&b));
  printf("the value of  variable  a is %u \n", a);

  return 0;
}