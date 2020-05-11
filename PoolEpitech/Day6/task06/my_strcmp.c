/*
  * Pool Day 6 - Task 06 : my_strcmp
  * Maëva Lecavelier - 29/01/2020
*/


void    my_putchar(char c);
void    my_putstr(char *str);
int     my_strlen(char const *str);
void    my_put_nbr(int nb);

int   comp(char const *s1, char const *s2)
{
  int   i;

  i = my_strlen(s1);
  for(int cpt = 0; cpt < i-1; cpt++)
  {
    if(s1[cpt] < s2[cpt])
      return (-1);
    if(s1[cpt] > s2[cpt])
      return (1);
  }
  return (0);
}

int   my_strcmp(char const *s1, char const *s2)
{
  int   size1;
  int   size2;

  size1 = my_strlen(s1);
  size2 = my_strlen(s2);

  if(size1 < size2)
    return(-1);
  if(size1 > size2)
    return(1);
  return(comp(&s1, &s2));

}


int   main()
{
  my_put_nbr(strcmp("blop","hello"));
  my_putchar('\n');
  my_put_nbr(my_strcmp("blop","hello"));
  my_putchar('\n');
  my_putchar('\n');
  my_put_nbr(strcmp("hello", "blop"));
  my_putchar('\n');
  my_put_nbr(my_strcmp("hello","blop"));
  my_putchar('\n');
  my_putchar('\n');
  my_put_nbr(strcmp("hello", "hello"));
  my_putchar('\n');
  my_put_nbr(my_strcmp("hello","hello"));
  my_putchar('\n');
  my_putchar('\n');
  my_put_nbr(strcmp("hellp","hello"));
  my_putchar('\n');
  my_put_nbr(my_strcmp("hellp","hello"));
  my_putchar('\n');
  my_putchar('\n');

  return (0);
}
