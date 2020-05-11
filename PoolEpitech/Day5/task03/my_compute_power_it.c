/*
  * Pool Day 5- Task 03 : my_compute_power_it
  * Maëva Lecavelier - 17/01/2020
*/

void    my_putchar(char c);
void    my_put_nbr(int nb);

int   my_compute_power_it(int nb, int p)
{
  int   res;

  if(p < 0)
    return (0);
  if(p == 0)
    return (1);

    res = nb;

  for(int i = 1; i < p; i++)
  {
    res = res * nb;
  }

  return (res);
}

int   main()
{
  my_put_nbr(my_compute_power_it(3,4));
  my_putchar('\n');
  my_put_nbr(my_compute_power_it(2,8));
  my_putchar('\n');
  my_put_nbr(my_compute_power_it(4,2));
  my_putchar('\n');
  my_put_nbr(my_compute_power_it(-1, 5));
  my_putchar('\n');
  my_put_nbr(my_compute_power_it(42, 0));
  my_putchar('\n');
  my_put_nbr(my_compute_power_it(42, -5));
  my_putchar('\n');
  return (0);
}
