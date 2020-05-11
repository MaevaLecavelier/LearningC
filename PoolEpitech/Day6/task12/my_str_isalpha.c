/*
  * Pool Day 6 - Task 12 : my_str_isalpha
  * Maëva Lecavelier - 29/01/2020
*/

void   my_put_nbr(int nb);
void	 my_putchar(char c);
void   my_putstr(char *str);

int   my_str_isalpha(char const *str)
{
  int   i;

  i = 0;
  while(str[i] != '\0')
  {
    if(!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
      return (0);
    i++;
  }
  return (1);
}

void  print_result(char *str)
{
    my_putstr(str);
    my_putstr("  =>  ");
    my_put_nbr(my_str_isalpha(str));
    my_putchar('\n');
}

int   main()
{
  print_result(strdup("Hello"));
  print_result(strdup("_Blop_"));
  print_result(strdup("Salut45"));
  print_result(strdup(""));
  return (0);
}
