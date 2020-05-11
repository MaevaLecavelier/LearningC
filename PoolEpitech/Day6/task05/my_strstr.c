/*
  * Pool Day 6 - Task 05 : my_strstr
  * Maëva Lecavelier - 29/01/2020
*/


void  my_putchar(char c);
void  my_putstr(char *str);
int   my_strlen(char const *str);
void  my_swap(int *a, int *b);

int   is_equal(char a, char b)
{
  return (a == b);
}

char  *my_strstr(char *str, char const *to_find)
{
  int   i;
  int   j;
  int   size_tofind;
  int   size_str;

  j = 0;
  i = 0;
  size_tofind = my_strlen(to_find);
  size_str = my_strlen(str);

  while(i < size_str && j < size_tofind)
  {
      if(str[i] == to_find[j])
        j++;
      else
        j = 0;
      i++;
  }
  if(j == size_tofind)
    return (to_find);
  return ("NULL");

}


int   main()
{
  my_putstr(my_strstr("helloboy", "hello"));
  my_putchar('\n');
  my_putstr(strstr("helloboy", "hello"));
  my_putchar('\n');
  my_putchar('\n');
  my_putstr(my_strstr("boyhello", "hello"));
  my_putchar('\n');
  my_putstr(strstr("boyhello", "hello"));
  my_putchar('\n');
  my_putchar('\n');
  my_putstr(my_strstr("karaoke", "hello"));
  my_putchar('\n');
  my_putstr(strstr("karaoke", "hello"));
  my_putchar('\n');
  return (0);
}
