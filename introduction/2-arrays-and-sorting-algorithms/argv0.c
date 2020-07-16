#include <stdio.h>

int main(int argc, char **argv)
{
  printf("%d\n", argc);
  if (argc == 1)
  {
    printf("Hello, world!\n");
  }
  else
  {
    for (int i = 1; i < argc; i++)
    {
      printf("Hello, %s!\n", argv[i]);
    }
  }
}