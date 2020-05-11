/*
  * Pool Day 6 - Task 03 : my_revstr
  * Maëva Lecavelier - 23/01/2020
*/

#include <string.h>

void  my_putchar(char c);
void  my_putstr(char *str);
int   my_strlen(char const *str);
void  my_swap(int *a, int *b);


char    *my_revstr(char *str)
{
  int   i;
  int   end;
  char  stock;

  i = 0;
  end = my_strlen(str) - 1;
  while (i < (my_strlen(str) / 2))
    {
      stock = str[i];
      str[i] = str[end];
      str[end] = stock;
      i = i + 1;
      end = end - 1;
    }
  return (str);
}

int   main()
{
  char *str;

  str = strdup("blop");
  my_putstr(str);
  my_putchar('\n');
  my_revstr(str);
  my_putstr(str);
  my_putchar('\n');
  return (0);
}
