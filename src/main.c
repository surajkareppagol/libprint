#include "print.h"

int main()
{
  int IA[] = {1, 2, 3, 4, 5};
  char CA[] = {'a', 'b', 'c', 'd', 'e'};
  float FA[] = {1.0, 2.0, 3.0, 4.0, 5.0};
  double DA[] = {1.00, 2.00, 3.00, 4.00, 5.00};

  print(IA, 5, 0, 0);
  print(CA, 5, 1, 1);
  print(FA, 5, 2, 0);
  print(DA, 5, 3, 1);

  print("This is libprint.\n", -1, 0, 0);

  return 0;
}