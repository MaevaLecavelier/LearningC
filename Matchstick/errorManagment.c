/*
  * Matchstick project - error input managment file
*/

#include "header.h"


int   problemLine(int line, char **map, int *params)
{
  if(line > params[0] || line <= 0)
    return (2);
  if(isEmpty(line, map))
    return (3);
  /*if(line > 20)
    return (1);*/
  return (0);
}

void  printPbLine(int pb)
{
  switch(pb)
  {
    case 1:
      my_putstr("Error: invalid input (positive number expected).");
      my_putchar('\n');
      break;

    case 2:
      my_putstr("Error: this line doesn't exist.");
      my_putchar('\n');
      break;

    case 3:
      my_putstr("Error: this line is empty.");
      my_putchar('\n');
      break;
  }
}

int   problemMatch(int matches, int line, char **map, int *params)
{
  if(matches > params[1] )
    return (1);
  if(matches <= 0)
    return(2);
  if(notEnough(matches, line, map))
    return (3);
  /*if() Not a number
    return (4);*/
  return (0);
}

void  printPbMatch(int pb, int *params)
{
  switch(pb)
  {
    case 1:
      my_putstr("Error: you can't remove more than ");
      my_put_nbr(params[1]);
      my_putstr(" matches per turn.");
      my_putchar('\n');
      break;

    case 2:
      my_putstr("Error: you have to remove 1 match at least.");
      my_putchar('\n');
      break;

    case 3:
      my_putstr("Error: not enough matches on this line.");
      my_putchar('\n');
      break;

    case 4:
      my_putstr("Error: invalid input (positive number expected).");
      my_putchar('\n');
      break;
  }
}
