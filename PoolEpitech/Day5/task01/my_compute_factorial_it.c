/*
  * Pool Day 5 - Task 01 : my_compute_factorial_it
  * Maëva Lecavelier - 17/01/2020
*/

void    my_putstr(char *str);
void    my_putchar(char c);
void    my_put_nbr(int nb);

int   my_compute_factorial_it(int nb)
{
  int   res;
  int   cpt;

  if(nb < 0)
    return (0);
  if(nb == 0)
    return (1);

  res = 1;
  cpt = 1;
  while(cpt <= nb)
  {
    res = res * cpt;
    cpt += 1;
  }
  return (res);

}

int   main()
{
  my_put_nbr(my_compute_factorial_it(4));
  my_putchar('\n');
  my_put_nbr(my_compute_factorial_it(-1));
  my_putchar('\n');
  my_put_nbr(my_compute_factorial_it(1));
  my_putchar('\n');
  my_put_nbr(my_compute_factorial_it(0));
  my_putchar('\n');
  return (0);
}
