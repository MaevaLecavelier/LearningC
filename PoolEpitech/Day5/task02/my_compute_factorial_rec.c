/*
  * Pool Day 5- Task 02 : my_compute_factorial_rec
  * Maëva Lecavelier - 17/01/2020
*/

void    my_putstr(char *str);
void    my_putchar(char c);
void    my_put_nbr(int nb);

int   my_compute_factorial_rec(int nb)
{
  int   res;

  if(nb < 0)
    return (0);
  if(nb == 1 || nb == 0)
    return (1);

  res = nb * my_compute_factorial_rec(nb - 1);
  return (res);
}



int   main()
{
  my_put_nbr(my_compute_factorial_rec(4));
  my_putchar('\n');
  my_put_nbr(my_compute_factorial_rec(-1));
  my_putchar('\n');
  my_put_nbr(my_compute_factorial_rec(1));
  my_putchar('\n');
  my_put_nbr(my_compute_factorial_rec(0));
  my_putchar('\n');
  return (0);
}
