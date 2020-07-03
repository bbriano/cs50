#include <stdio.h>

int main(void)
{
  char name[200];
  printf("Enter name: ");
  fgets(name, sizeof(name), stdin);
  printf("Hi, %s\n", name);
}