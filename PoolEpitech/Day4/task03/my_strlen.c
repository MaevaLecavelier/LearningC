/*
  * Pool Day 4 - Task 03 : my_strlen
  * Maëva Lecavelier - 16/01/2020
*/

void  my_putstr(char *str);
void  my_putchar(char c);
void  my_put_nbr(int nb);

int   my_strlen(char const *str)
{
  int   cpt;

  cpt = 0;
  while(str[cpt] != '\0')
  {
    cpt += 1;
  }

  return (cpt);
}

void print_result(char *a, int la)
{
  my_putstr("Lenght of \'\0");
  my_putstr(a);
  my_putstr("\' is \0");
  my_put_nbr(la);
  my_putstr(".\n\0");

}

int   main()
{
  char *hello;
  char *blop;
  char *o;
  int   a;
  int   b;
  int   c;

  hello = "hello\0";
  blop = "blop\0";
  o = "actuellement\0";
  a = my_strlen(hello);
  b = my_strlen(blop);
  c = my_strlen(o);

  print_result(hello, a);
  print_result(blop, b);
  print_result(o,c);

  return (0);
}
