/*
  * Pool Day 5- Task 06 : my_is_prime
  * Maëva Lecavelier - 18/01/2020
*/

void    my_putchar(char c);
void    my_put_nbr(int nb);
void    my_putstr(char *str);


int   my_is_prime(int nb)
{
  if((nb == 0) || (nb == 1))
    return (0);
  for(int i = 2; i < nb; i++)
  {
    if(nb%i == 0)
      return (0);
  }
  return (1);
}


void  print_result(int n)
{
  my_put_nbr(n);
  my_putstr(" => ");
  my_put_nbr(my_is_prime(n));
  my_putchar('\n');
}

int   main()
{
  print_result(0);  //0
  print_result(1);  //0
  print_result(3);  //1
  print_result(4);  //0
  print_result(17); //1
  print_result(27); //0
  print_result(73); //1
  print_result(97); //1
  return (0);
}
