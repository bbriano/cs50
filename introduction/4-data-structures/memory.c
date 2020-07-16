#include <stdlib.h>
#include <stdio.h>

void f();

int main()
{
  f();
}

void f()
{
  int *x = malloc(10 * sizeof(int));
  x[0] = 50;
  x[10] = 4;
  printf("%i, %i\n", x[0], x[10]);
}