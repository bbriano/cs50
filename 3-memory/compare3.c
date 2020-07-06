#include <stdio.h>
#include <string.h>

int main()
{
  char s[20];
  char t[20];
  printf("s: ");
  scanf("%s", s);
  printf("t: ");
  scanf("%s", t);

  if (strcmp(s, t))
  {
    printf("different\n");
  }
  else
  {
    printf("same\n");
  }
}
