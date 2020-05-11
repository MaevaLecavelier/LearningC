/*
  * Pool Day 6 - Task 09 : my_strlowcase
  * Maëva Lecavelier - 29/01/2020
*/
//65 = A ; 97 = a ; écart = 32

int   my_strlen(char const *str);
void	my_putchar(char c);
void  my_putstr(char *str);


char  *my_strlowcase(char  *str)
{
  int   i;

  i =  0;
  while(str[i] != '\0')
  {
    if(str[i] >= 'A' && str[i] <= 'Z')
      str[i] = str[i]+32;
    i++;
  }
  return (str);
}

void  print_result(char *str)
{
    my_putstr(str);
    my_putstr("  =>  ");
    my_putstr(my_strlowcase(str));
    my_putchar('\n');
}

int   main()
{

  print_result(strdup("HELLO"));
  print_result(strdup("BonJouR"));
  print_result(strdup("bLOp43"));

  return (0);
}
