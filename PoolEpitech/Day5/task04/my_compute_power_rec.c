/*
  * Pool Day 5- Task 04 : my_compute_power_rec
  * Maëva Lecavelier - 17/01/2020
*/

void    my_putchar(char c);
void    my_put_nbr(int nb);

int   my_compute_power_rec(int nb, int p)
{
  int   res;

  if(p == 0)
    return (1);
  if(p < 0)
    return(0);
  res = nb * my_compute_power_rec(nb, p - 1);
  return (res);

}

int   main()
{
  my_put_nbr(my_compute_power_rec(3,4));
  my_putchar('\n');
  my_put_nbr(my_compute_power_rec(2,8));
  my_putchar('\n');
  my_put_nbr(my_compute_power_rec(4,2));
  my_putchar('\n');
  my_put_nbr(my_compute_power_rec(-1, 5));
  my_putchar('\n');
  my_put_nbr(my_compute_power_rec(42, 0));
  my_putchar('\n');
  my_put_nbr(my_compute_power_rec(42, -5));
  my_putchar('\n');
  return (0);
}
