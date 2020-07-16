#include <stdio.h>

int main(void)
{
  int i = 0;
  while (i < 10)
  {
    printf("%d\n", i);
    i = i + 2;
  }
  for (int i; i < 20; i = i + 3)
  {
    printf("%d\n", i);
  }
}