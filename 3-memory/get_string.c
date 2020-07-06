#include <stdio.h>
#include <string.h>

char *get_string(char *prompt);

int main()
{
  char *name = get_string("Enter name: ");
  printf("Your name is %s\n", name);
  printf("%zu", strlen(name));
}

char *get_string(char *prompt)
{
  char res[50];
  printf("%s", prompt);
  scanf("%s", res);
  return res;
}