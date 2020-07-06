#include <stdlib.h>
#include <stdio.h>

int main()
{
  int *x;
  int *y;

  x = malloc(sizeof(int));

  *x = 42;
  *y = 13;

  // y = x;
  // *y = 13;

  printf("%d\n", *x);
  printf("%d\n", *y);
}