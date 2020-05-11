/*
  * Matchstick project - tools file
*/

#include "header.h"


int   isEmpty(int line, char **map)
{
  int   i;

  i = 0;
  while(map[line][i] != '\0')
  {
    if(map[line][i] == '|')
      return(0);
    i++;
  }

  return (1);

}

int   notEnough(int matches, int line, char **map)
{
  int   matchesCpt;
  int   i;

  i = 0;
  matchesCpt = 0;
  while(map[line][i] != '\0')
  {
    if(map[line][i] == '|')
      matchesCpt++;
    i++;
  }
  return (matchesCpt<matches);

}
