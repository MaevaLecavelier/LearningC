/*
  * Pool Day 3 - Task 06 : my_print_comb2
  * Maëva Lecavelier - 11/01/2020
*/

#include <unistd.h>
#include <stdio.h>
void my_putchar(char c);


int   print_comb(char a, char b, char c, char d)
{
  my_putchar(a);
  my_putchar(b);
  my_putchar(' ');
  my_putchar(c);
  my_putchar(d);
  if (a != '9' || b != '8' || c != '9' || d != '9')
  {
    my_putchar(',');
    my_putchar(' ');
  }
}

char change_sup_number(char *b2, char *b1, char *a2, char *a1)
{
  *b2 += 1;
  if(*b2 == '9' + 1)
  {
    *b2 = '0';
    *b1 += 1;
  }
  if(*b1 == '9' + 1)
  {
    *b1 = '0';
    *a2 += 1;
  }
  if(*a2 == '9' + 1)
  {
    *a2 = '0';
    *a1 += 1;
  }

}



int   my_print_comb2(void)
{
  char a1;
  char a2;
  char b1;
  char b2;
  int a;
  int b;

  a1 = '0';
  a2 = '0';
  b1 = '0';
  b2 = '0';
  a = (a1 - '0') * 10 + ( a2 - '0');
  b = (b1 - '0') * 10 + ( b2 - '0');

  while (a1 != '9' || a2 != '8' || b1 != '9' || b2 != '9')
  {
    if (a >= b);
    else print_comb(a1, a2, b1, b2);
    change_sup_number(&b2, &b1, &a2, &a1);
    a = (a1 - '0') * 10 + ( a2 - '0');
    b = (b1 - '0') * 10 + ( b2 - '0');
  }
  print_comb(a1, a2, b1, b2);
  my_putchar('\n');
  return (0);
}


int   main(void)
{
  my_print_comb2();
  return (0);
}
