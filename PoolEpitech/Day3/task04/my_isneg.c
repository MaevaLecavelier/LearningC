/*
  * Pool Day 3 - Task 04 : my_isneg
  * Maëva Lecavelier - 09/01/2020
*/

#include <unistd.h>
void my_putchar(char c);

int   my_isneg(int n)
{
  int   returned_value;

  if(n < 0)
  {
    returned_value = 'N';
  }
  else
  {
    returned_value = 'P';
  }

  return (returned_value);
}

int   main(void)
{
  int   result;
  int   null_value;
  int   pos_value;
  int   neg_value;

  null_value = 0;
  pos_value = 42;
  neg_value = -3;

  my_putchar(my_isneg(null_value));
  my_putchar('\n');

  my_putchar(my_isneg(pos_value));
  my_putchar('\n');

  my_putchar(my_isneg(neg_value));
  my_putchar('\n');

  return (0);
}
