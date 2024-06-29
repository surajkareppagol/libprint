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
void print(const void *data, int size, int type)
{
  printf("[");
  color(YELLOW);
  for (int i = 0; i < size; i++)
  {
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
  }

  color(DEFAULT);
  printf("]\n");
}
