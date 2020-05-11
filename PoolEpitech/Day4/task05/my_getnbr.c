/*
  * Pool Day 4 - Task 05 : my_getnbr
  * Maëva Lecavelier - 17/01/2020
*/

void  my_putstr(char *str);
void  my_putchar(char c);
void  my_put_nbr(int nb);

// -2 147 483 648 <= int <= 2 147 483 647 | -(2e31) <= int <= 2e31 - 1


int   is_int(int n)
{
  int   max;
  int   min;

  max = 2147483647;
  min = -2147483648;
  return((n<=max)&&(n>=min));
}

int   my_getnbr(char const *str)
{
  int   res;
  int   cpt;
  int   cpt_int;
  int   is_neg;

  cpt = 0;
  cpt_int = 0;
  is_neg = 1;
  res = 0;

  while(str[cpt] != '\0' &&(str[cpt] == '+' || str[cpt] == '-'))
  {
    if(str[cpt] == '-')
      is_neg = is_neg * (-1);
    cpt += 1;
  }

  while(str[cpt] <= 57 && str[cpt] >= 48)
  {
    res = res*10 + str[cpt] - 48;
    cpt_int += 1;
    cpt += 1;
  }

  res = res*is_neg;
  if(cpt_int > 11) return(0);
  return(res);

}

void print_result(char *str)
{
  int   res;

  res = my_getnbr(str);
  my_putstr(str);
  my_putstr(" => \0");
  my_put_nbr(res);
  my_putchar('\n');
}

int   main()
{
  char  *first;
  char  *second;
  char  *third;
  char  *fourth;
  char  *test;

  first = strdup("+---+--++---+---+---+-42");
  second = strdup("42a43");
  third = strdup("1100000000000000000000042");
  fourth = strdup("-100000000000000000000042");
  test = strdup("-123456bc");

  print_result(first);
  print_result(second);
  print_result(third);
  print_result(fourth);
  print_result(test);

  return (0);
}
