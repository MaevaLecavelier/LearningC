/*
  * Pool Day 5- Task 08 : count_valid_queens_placements
  * Maëva Lecavelier - 18/01/2020
*/

void    my_putchar(char c);
void    my_put_nbr(int nb);
void    my_putstr(char *str);


int   count_valid_queens_placements(int n)
{
  if(n == 1)
    return (1);

    
}


int   main(int argc, char *argv[])
{
  int   n;

  n = argv[1];
  my_put_nbr(count_valid_queens_placements(n));
  my_putchar('\n');
}
