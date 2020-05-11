/*
  * Pool Day 6 - Task 08 : my_strupcase
  * Maëva Lecavelier - 29/01/2020
*/
//65 = A ; 97 = a ; écart = 32

int   my_strlen(char const *str);
void	my_putchar(char c);
void  my_putstr(char *str);


char  *my_strupcase(char  *str)
{
  int   i;

  i =  0;
  while(str[i] != '\0')
  {
    if(str[i] >= 97 && str[i] < 122)
      str[i] = str[i]-32;
    i++;
  }
  return (str);
}

void  print_result(char *str)
{
    my_putstr(str);
    my_putstr("  =>  ");
    my_putstr(my_strupcase(str));
    my_putchar('\n');
}

int   main()
{

  print_result(strdup("hello"));
  print_result(strdup("BonJouR"));
  print_result(strdup("blop43"));

  return (0);
}
