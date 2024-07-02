/*********************************************************************
 * libprint
 * "libprint" is a specialized print functions for c, so the process of
 * debugging becomes much easier.
 *********************************************************************/

#include <stdio.h>

#include "print.h"
#include "colors.h"

/*****************************
 * void print(const void *data, int size, int type)
 *
 * Cast *data based on type value.
 *
 * type 0 = integer
 * type 1 = character
 * type 2 = float
 * type 3 = double
 *****************************/
void print(const void *data, int size, int type, int index)
{
  if (size < 0)
    printf("%s", (char *)data);
  else
    printArray(data, size, type, index);
}

void printArray(const void *data, int size, int type, int index)
{
  printf("[");
  color(YELLOW);

  if (index)
    printf("\n");

  for (int i = 0; i < size; i++)
  {
    if (index)
      printf(" %d: ", i);
    else
      printf(" %d: ", i);

    if (i == size - 1)
    {
      if (type == 0)
        printf("%d", ((int *)data)[i]);
      else if (type == 1)
        printf("%c", ((char *)data)[i]);
      else if (type == 2)
        printf("%f", ((float *)data)[i]);
      else if (type == 3)
        printf("%lf", ((double *)data)[i]);
    }
    else
    {
      if (type == 0)
        printf("%d, ", ((int *)data)[i]);
      else if (type == 1)
        printf("%c, ", ((char *)data)[i]);
      else if (type == 2)
        printf("%f, ", ((float *)data)[i]);
      else if (type == 3)
        printf("%lf, ", ((double *)data)[i]);
    }

    if (index)
      printf("\n");
  }

  color(DEFAULT);
  printf("]\n");
}