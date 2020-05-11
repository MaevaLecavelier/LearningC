/*
  * Pool Day 6 - Task 01 : my_strncpy
  * Maëva Lecavelier - 23/01/2020
*/

#include <string.h>

void  my_putchar(char c);
void  my_putstr(char *str);

char  *my_strncpy(char *dest, char const *src, int n)
{
  int   i;

  i = 0;
  while(src[i] != '\0' && i < n)
  {
    dest[i] = src[i];
    i = i + 1;
  }
  while(i < n)
  {
    dest[i] = '\0';
    i++;
  }
  return (dest);
}

int   main()
{
  char  *dest;
  char  *src;

  src = strdup("blop");
  my_putstr(src);
  my_putchar('\n');
  my_strncpy(&dest, &src, 3);
  //my_putstr(dest);
  my_putchar('\n');
  return (0);
}
