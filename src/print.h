/*********************************************************************
 * libprint
 * "libprint" is a specialized print functions for c, so the process of
 * debugging becomes much easier.
 *********************************************************************/

#ifndef __PRINT_H_
#define __PRINT_H_

void print(const void *data, int size, int type);

void printIA(int *data, int size);
void printCA(char *data, int size);
void printFA(float *data, int size);
void printDA(double *data, int size);

#endif
