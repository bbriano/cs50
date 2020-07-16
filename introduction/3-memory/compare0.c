#include <stdio.h>

int main()
{
  int i;
  int j;
  printf("j: ");
  scanf("%d", &j);
  printf("i: ");
  scanf("%d", &i);

  if (i == j)
  {
    printf("same\n");
  }
  else
  {
    printf("different\n");
  }
}
