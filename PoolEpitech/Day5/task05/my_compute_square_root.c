/*
  * Pool Day 5- Task 05 : my_compute_square_root
  * Maëva Lecavelier - 17/01/2020
*/

void    my_putchar(char c);
void    my_put_nbr(int nb);
void    my_putstr(char *str);

int   my_compute_square_root(int nb)
{
  int   cpt;

  cpt = 0;

  while((cpt*cpt != nb) && cpt < 1000)
  {
    cpt += 1;
  }
  if(cpt == 1000) return (0);
  return (cpt);
}

void  print_result(int a)
{
  int   sqrt;

  sqrt = my_compute_square_root(a);
  my_put_nbr(a);
  my_putstr(" => ");
  my_put_nbr(sqrt);
  my_putchar('\n');
}

int   main()
{
  print_result(64);
  print_result(81);
  print_result(-1);
  print_result(16);
  print_result(5);
  return (0);
}
