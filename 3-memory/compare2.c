#include <stdio.h>

int strLength(char s[]);
int strSame(char s[], char t[]);

int main()
{
  char s[20];
  char t[20];
  printf("s: ");
  scanf("%s", s);
  printf("t: ");
  scanf("%s", t);

  if (strSame(s, t))
  {
    printf("same\n");
  }
  else
  {
    printf("different\n");
  }
}

int strSame(char s[], char t[])
{
  if (strLength(s) != strLength(t))
  {
    return 0;
  }

  for (int i = 0, n = strLength(s); i < n; i++)
  {
    if (s[i] != t[i])
    {
      return 0;
    }
  }
  return 1;
}

int strLength(char s[])
{
  return sizeof(&s) / sizeof(s[0]);
}
