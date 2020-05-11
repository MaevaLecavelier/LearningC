/*
  * Pool Day 6 - Task 10 : my_strcapitalize
  * Maëva Lecavelier - 29/01/2020
*/
//65 = A ; 97 = a ; écart = 32

int   my_strlen(char const *str);
void	my_putchar(char c);
void  my_putstr(char *str);

int   is_space(char c)
{
  return
    (
        (c == 32)
      || (c >= 38 && c <=47)
      || (c >= 91 && c <=96)
      || (c >= 123 && c <= 125)
    );
}

char  *my_strcapitalize(char  *str)
{
  int   i;

  i = 1;
  if(str[0] >= 'a' && str[0] <= 'z')
    str[0] = str[0] - 32;
  while(str[i] != '\0')
  {
    if(is_space(str[i-1]) && (str[i] >= 'a' && str[i] <= 'z'))
      str[i] = str[i] - 32;
    else if(!(is_space(str[i-1])) && (str[i] >= 'A' && str[i] <= 'Z'))
      str[i] = str[i] + 32;
    i++;
  }
  return (str);
}

void  print_result(char *str)
{
    my_putstr(str);
    my_putstr("  =>  ");
    my_putstr(my_strcapitalize(str));
    my_putchar('\n');
}

int   main()
{

  print_result(strdup("hELLO"));
  print_result(strdup("BonJouR"));
  print_result(strdup("bLOp43"));
  print_result(strdup("hey,how are you? 42WORds forty-two; fifty+one"));

  return (0);
}
