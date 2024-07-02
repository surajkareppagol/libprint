/*********************************************************************
 * libprint
 * "libprint" is a specialized print functions for c, so the process of
 * debugging becomes much easier.
 *********************************************************************/

#ifndef __PRINT_H_
#define __PRINT_H_

void print(const void *data, int size, int type, int index);

void printArray(const void *data, int size, int type, int index);

#endif
