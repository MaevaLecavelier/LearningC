/*
  * Pool Day 3 - Task 01 : my_print_alpha
  * Maëva Lecavelier - 09/01/2020
*/
#include <unistd.h>

int my_print_alpha(void)
{
  char  letter;
  char  back_line;

  letter = 'a';
  back_line = '\n';
  while(letter <= 'z')
  {
    write(1, &letter, 1);
    letter += 1;
  }

  write(1, &back_line, 1);
  return (0);
}

int main()
{
  my_print_alpha();
  return (0);
}
