/*
  * Pool Day 3 - Task 02 : my_print_revalpha
  * Maëva Lecavelier - 09/01/2020
*/
#include <unistd.h>

int my_print_revalpha(void)
{
  char  letter;
  char  back_line;

  letter = 'z';
  back_line = '\n';
  while(letter >= 'a')
  {
    write(1, &letter, 1);
    letter -= 1;
  }

  write(1, &back_line, 1);
  return (0);
}

int main()
{
  my_print_revalpha();
  return (0);
}
