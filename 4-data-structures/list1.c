#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *numbers = NULL;
  int size = 0;

  while (1)
  {
    int number;
    printf("Enter numbers[%i]: ", size);
    scanf("%i", &number);

    if (number == 999)
    {
      break;
    }

    numbers = realloc(numbers, sizeof(int) * (size++));
    numbers[size - 1] = number;
  }

  // Print List like [n1, n2, n3, ...]
  printf("[");
  for (int i = 0; i < size; i++)
  {
    printf("%i, ", numbers[i]);
  }
  printf("\b\b]\n");

  free(numbers);
}
