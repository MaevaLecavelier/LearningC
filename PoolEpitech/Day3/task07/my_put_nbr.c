/*
  * Pool Day 3 - Task 07 : my_put_nbr
  * Maëva Lecavelier - 11/01/2020
*/

#include <unistd.h>
void my_putchar(char c);


int   my_put_nbr(int nb)
{
  int   tmp;

  if(nb < 0)  {
    my_putchar('-');
    nb = nb * (-1);
  }

  if(nb >= 0)
  {
    if(nb < 10)
    {
      my_putchar(48 + nb);
    }
    else
    {
      tmp = nb % 10;
      nb = nb / 10;
      my_put_nbr(nb);
      my_putchar(48 + tmp);

    }
  }
  return (0);
}

int   main(void)
{
  int a;
  int b;
  int c;

  a = 42;
  b = 0;
  c = -2147483647;
  my_put_nbr(a);
  my_putchar('\n');
  my_put_nbr(b);
  my_putchar('\n');
  my_put_nbr(c);
  my_putchar('\n');

  return (0);
}
