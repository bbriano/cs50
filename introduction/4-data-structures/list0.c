#include <stdio.h>

int main()
{
  int capacity;

  printf("Enter capacity: ");
  scanf("%i", &capacity);

  int numbers[capacity];

  int size = 0;

  while (size < capacity)
  {
    int number;
    printf("Enter numbers[%i]: ", size);
    scanf("%i", &number);
    numbers[size] = number;
    size++;
  }

  printf("[");
  for (int i = 0; i < size; i++)
  {
    printf("%i, ", numbers[i]);
  }
  printf("\b\b]\n");
}
