/*
  * Pool Day 3 - Task 03 : my_print_digits
  * Maëva Lecavelier - 09/01/2020
*/
#include <unistd.h>

int my_print_digits(void)
{
  int   digit;
  char  back_line;

  digit = '0';
  back_line = '\n';
  while(digit <= '9')
  {
    write(1, &digit, 1);
    digit += 1;
  }

  write(1, &back_line, 1);
  return (0);
}

int main()
{
  my_print_digits();
  return (0);
}
