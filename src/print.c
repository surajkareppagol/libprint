/*********************************************************************
 * libprint
 * "libprint" is a specialized print functions for c, so the process of
 * debugging becomes much easier.
 *********************************************************************/

#include <stdio.h>

#include "print.h"

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
  switch (type)
  {
  case 0:
    printIA((int *)data, size);
    break;
  case 1:
    printCA((char *)data, size);
    break;
  case 2:
    printFA((float *)data, size);
    break;
  case 3:
    printDA((double *)data, size);
    break;
  }
}

/*****************************
 * void printIA(int *data, int size)
 *
 * Print integer data formatted.
 *****************************/
void printIA(int *data, int size)
{
  printf("[");

  for (int i = 0; i < size; i++)
  {
    if (i == size - 1)
      printf("%d", data[i]);
    else
      printf("%d, ", data[i]);
  }

  printf("]\n");
}

/*****************************
 * void printCA(char *data, int size)
 *
 * Print character data formatted.
 *****************************/
void printCA(char *data, int size)
{
  printf("[");

  for (int i = 0; i < size; i++)
  {
    if (i == size - 1)
      printf("%c", data[i]);
    else
      printf("%c, ", data[i]);
  }

  printf("]\n");
}

/*****************************
 * void printFA(float *data, int size)
 *
 * Print float data formatted.
 *****************************/
void printFA(float *data, int size)
{
  printf("[");

  for (int i = 0; i < size; i++)
  {
    if (i == size - 1)
      printf("%f", data[i]);
    else
      printf("%f, ", data[i]);
  }

  printf("]\n");
}

/*****************************
 * void printDA(double *data, int size)
 *
 * Print double data formatted.
 *****************************/
void printDA(double *data, int size)
{
  printf("[");

  for (int i = 0; i < size; i++)
  {
    if (i == size - 1)
      printf("%lf", data[i]);
    else
      printf("%lf, ", data[i]);
  }

  printf("]\n");
}