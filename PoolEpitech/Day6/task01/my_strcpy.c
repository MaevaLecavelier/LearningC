/*
  * Pool Day 6 - Task 01 : my_strcpy
  * Maëva Lecavelier - 23/01/2020
*/

#include <string.h>

void  my_putchar(char c);
void  my_putstr(char *str);

char *my_strcpy(char *dest, char const *src)
{
  int   i;

  i = 0;
  while(src[i] != '\0')
  {
    dest[i] = src[i];
    i = i + 1;
  }
  dest[i] = '\0';

  return (dest);
}

int   main()
{
  char *dest;
  char *src;

  src = strdup("blop");
  my_putstr(src);
  my_putchar('\n');
  my_strcpy(&dest, &src);
  my_putstr(dest);
  my_putchar('\n');

  return (0);
}
