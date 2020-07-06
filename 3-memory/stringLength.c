#include <stdio.h>
#include <string.h>

int main()
{
  char *name = "";
  printf("%s\n", name);
  printf("%d\n", (int)strlen(name));
  printf("%lu\n", sizeof(name));
  printf("%lu\n", sizeof(*name));
  printf("%lu\n", sizeof(name[0]));
}
