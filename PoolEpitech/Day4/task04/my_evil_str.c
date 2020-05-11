/*
  * Pool Day 4 - Task 04 : my_evil_str
  * Maëva Lecavelier - 16/01/2020
*/

void  my_putstr(char *str);
void  my_putchar(char c);
void  my_put_nbr(int nb);
int   my_strlen(char *str);


char *my_evil_str(char *str)
{
  int   i;
  int   j;
  char  tmp;

  i = 0;
  j = my_strlen(str) - 1;

  while(i < j)
  {
    tmp = str[i];
    str[i] = str[j];
    str[j] = tmp;
    j = j - 1;
    i = i + 1;
  }
  return (str);
}



void print_result(char *str)
{

    my_putstr(str);
    my_putstr(" => \0");
    my_evil_str(str);
    my_putstr(str);
    my_putchar('\n');
}

int   main()
{
  char  *a;
  char  *ab;
  char  *abc;
  char  *abcd;
  char  *abcde;
  char  *abcdef;

  a = strdup("a");
  ab = strdup("ab");
  abc = strdup("abc");
  abcd = strdup("abcd");
  abcde = strdup("abcde");
  abcdef = strdup("abcdef");

  print_result(a);
  print_result(ab);
  print_result(abc);
  print_result(abcd);
  print_result(abcde);
  print_result(abcdef);

  return(0);
}
