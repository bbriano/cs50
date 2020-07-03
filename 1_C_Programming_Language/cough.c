#include <stdio.h>
// #include <cs50.h>

void cough(int n);
// int get_positive_int(string prompt);

int main(void)
{
  int n = get_positive_int("Enter a positive number: ");
  cough(n);
}

void cough(int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("cough\n");
  }
}

// int get_positive_int(string prompt)
// {
//   int n;
//   do
//   {
//     n = get_int(prompt);
//   } while (n < 1);
//   return n;
// }