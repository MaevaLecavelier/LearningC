/*
  * Pool Day 4 - Task 01 : my_swap
  * Maëva Lecavelier - 14/01/2020
*/

void my_putstr(char *str);
void my_putchar(char c);

void  print_result(char a, char b)
{
  my_putchar(a);
  my_putstr(", \0");
  my_putchar(b);
  my_putchar('.');
  my_putchar('\n');
}

void  my_swap(int *a, int *b)
{
  int   tmp;
  char  str_a;
  char  str_b;

  str_a = *a;
  str_b = *b;
  my_putstr("Initial values of a and b : \0");
  print_result(str_a, str_b);
  tmp = *a;
  *a = *b;
  *b = tmp;
  str_a = *a;
  str_b = *b;
  my_putstr("New values of a and b : \0");
  print_result(str_a, str_b);
}


int   main()
{
  int   a;
  int   b;

  a = 42;
  b = 57;
  my_swap(&a, &b);
  return (0);
}
