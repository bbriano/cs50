#include <stdio.h>

int main()
{
  char s[20];
  char t[20];
  printf("j: ");
  scanf("%s", s);
  printf("i: ");
  scanf("%s", t);

  if (s == t)
  {
    printf("same\n");
  }
  else
  {
    printf("different\n");
  }
}
