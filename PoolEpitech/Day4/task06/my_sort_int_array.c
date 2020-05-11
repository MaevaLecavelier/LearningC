/*
  * Pool Day 4 - Task 06 : my_sort_int_array
  * Maëva Lecavelier - 17/01/2020
*/

void    my_putstr(char *str);
void    my_putchar(char c);
void    my_put_nbr(int nb);
int     my_strlen(char *str);
void    my_swap(int *a, int *b);



void  swap_if_needed(int *a, int *b)
{
  if(*a > *b)
    my_swap(a,b);
}



void  my_sort_int_array(int *array, int size)
{
  int   i;
  int   j;

  for(i = 0; i <= size - 1; i++)
  {
    for(j = 1; j<= size - 1 - i; j++)
    {
      swap_if_needed(&array[j-1], &array[j]);
    }
  }
}

void  print_array(int *array, int size)
{
  int   i;

  my_putchar('[');
  for(i = 0; i <= size-1; i++)
  {
    my_put_nbr(array[i]);
    if(i != size -1 )
      my_putstr(", \0");
  }
  my_putchar(']');
}

void  print_result(int *array, int size)
{
  print_array(array, size);
  my_putstr(" => ");
  my_sort_int_array(array, size);
  print_array(array, size);
  my_putstr("\n\0");
}

int   main()
{
  int array[] = {7,5,1,6,0};
  int test[] = {8,5,9,0,14,11};
  print_result(array, 5);
  print_result(test, 6);
  return(0);
}
