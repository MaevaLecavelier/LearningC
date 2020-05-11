/*
  * Pool Day 3 - Task 05 : my_print_comb
  * Maëva Lecavelier - 09/01/2020
*/

#include <unistd.h>
void my_putchar(char c);


int   print_result(int a, int b, int c)
{
  my_putchar(' ');
  my_putchar(a);
  my_putchar(b);
  my_putchar(c);

}

int   my_print_comb(void)
{
  int   first_digit;
  int   second_digit;
  int   third_digit;

  first_digit = '0';
  second_digit = '1';
  third_digit = '2';
  while(first_digit <= '7')
  {
    while(second_digit <= '8')
    {
      while(third_digit <= '9')
      {
        if( (first_digit < second_digit) && (second_digit < third_digit))
        {
          my_putchar(',');
          print_result(first_digit, second_digit, third_digit);
        }
        third_digit += 1;
      }
      second_digit += 1;
      third_digit = second_digit;
    }
    first_digit += 1;
    second_digit = first_digit;
  }
  my_putchar('\n');
  return (0);
}


int   main(void)
{
  my_print_comb();
  return (0);
}
