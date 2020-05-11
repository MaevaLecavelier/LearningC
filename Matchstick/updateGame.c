/*
  * Matchstick project - update file
*/

#include "header.h"


char **updateMap(char **map, int line, int matches, int *params)
{
  int   cpt;
  int   i;

  cpt = 0;
  i = params[0] + 3;

  while(i >= 0)
  {
    if(map[line][i] == '|' && cpt < matches)
    {
      map[line][i] = ' ';
      cpt++;
    }
    i--;
  }
  return (map);
}
