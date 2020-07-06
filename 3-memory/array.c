#include <stdio.h>

void printInts(int num[]);

int main()
{
  int scores[] = {1, 2, 3};
  printInts(scores);
}

void printInts(int num[])
{
  int n = sizeof(num);
  printf("%d", n);
  for (int i = 0; i < n; i++)
  {
    printf("%d\n", num[i]);
  }
}