#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int number;
  struct node *next;
} node;

void printLinkedList(struct node list);

int main()
{
  node *numbers = NULL;

  while (1)
  {
    int number;
    printf("Enter number: ");
    scanf("%i", &number);

    if (number == 999)
    {
      break;
    }

    node *n = malloc(sizeof(node));
    n->number = number;
    n->next = NULL;

    if (numbers)
    {
      for (node *ptr = numbers; 1; ptr = ptr->next)
      {
        if (!ptr->next)
        {
          ptr->next = n;
          break;
        }
      }
    }
    else
    {
      numbers = n;
    }
  }

  printLinkedList(*numbers);
  free(numbers);
}

void printLinkedList(node list)
{
  printf("[");
  node n = list;
  while (1)
  {
    printf("%i, ", n.number);
    if (n.next == NULL)
    {
      break;
    }
    n = *n.next;
  }
  printf("\b\b]\n");
}