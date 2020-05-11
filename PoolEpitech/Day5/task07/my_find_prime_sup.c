/*
  * Pool Day 5- Task 07 : my_find_prime_sup
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

int   my_find_prime_sup(int nb)
{
  int   res;

  res = nb;

  while(!my_is_prime(res))
      res += 1;

  return (res);
}

void  print_result(int n)
{
  my_putstr("Smallest prime number greater than, or equal to ");
  my_put_nbr(n);
  my_putstr(" is : ");
  my_put_nbr(my_find_prime_sup(n));
  my_putchar('\n');
}


int   main()
{
  print_result(1);  //2
  print_result(8);  //11
  print_result(16); //17
  print_result(97); //97
  return(0);
}
