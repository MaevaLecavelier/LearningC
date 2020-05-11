/*
  * Matchstick project - main file
  * 31/01/2020 - 03/02/2020
  * Maëva Lecavelier
*/


#include "header.h"


int   checkEndGame(char **map, int  *params)
{
  int   nb_line;
  int   i;
  int   j;

  nb_line = params[0]+2;
  i = 0;
  j = 0;
  while(i < nb_line)
  {
    while(map[i][j] != '\0')
    {
      if(map[i][j] == '|')
        return (0);
      j++;
    }
    j = 0;
    i++;
  }
  return (1);

}

int  printEndGame(int PlayerWin)
{
  if(PlayerWin)
  {
    my_putstr("I lost... snif... but I'll get you next time!");
    my_putchar('\n');
    return (1);
  }
  my_putstr("You lost, too bad...");
  my_putchar('\n');
  return (2);
}


char  **playerTurn(char **map, int *params)
{
  int   line;
  int   matches;
  int   koLine;
  int   koMatch;

  koLine = 1;
  koMatch = 1;
  my_putstr("Your turn:");
  my_putchar('\n');
  while(koLine)
  {
    my_putstr("Line: ");
    scanf("%d", &line);
    koLine = problemLine(line, map, params);
    if(koLine)
      printPbLine(koLine);
  }
  while(koMatch)
  {
    my_putstr("Matches: ");
    scanf("%d", &matches);
    koMatch = problemMatch(matches, line, map, params);
    if(koMatch)
      printPbMatch(koMatch, params);
  }
  my_putstr("Player removed ");
  my_put_nbr(matches);
  my_putstr(" match(es) from line ");
  my_put_nbr(line);
  my_putchar('\n');

  map = updateMap(map, line, matches, params);

  return (map);
}

char  **iaTurn(char **map, int *params)
{
  int   line;
  int   matches;
  int   koLine;
  int   koMatch;

  koLine = 1;
  koMatch = 1;
  my_putstr("IA's turn:");
  my_putchar('\n');
  while(koLine)
  {
    line = rand()%params[0] + 1;
    koLine = problemLine(line, map, params);
  }
  while(koMatch)
  {
    matches = rand()%params[1] + 1;
    koMatch = problemMatch(matches, line, map, params);
  }
  my_putstr("IA removed ");
  my_put_nbr(matches);
  my_putstr(" match(es) from line ");
  my_put_nbr(line);
  my_putchar('\n');

  map = updateMap(map, line, matches, params);

  return (map);

}

int   main(int argc, char **argv)
{
  char  **map;
  int   *params;
  int   inGame;
  int   playerWin;
  int   endGame;

  srand(time(NULL));
  params = get_params(argv);
  map = create_game(params);
  draw_game(map, params);

  inGame = 1;

  while(inGame)
  {
    map = playerTurn(map, params);
    draw_game(map, params);
    if(checkEndGame(map, params))
    {
      inGame = 0;
      playerWin = 0;
      break;
    }
    map = iaTurn(map, params);
    draw_game(map, params);
    if(checkEndGame(map, params))
    {
      inGame = 0;
      playerWin = 1;
    }
  }

  free(map);
  free(params);

  endGame = printEndGame(playerWin);
  return(endGame);


  return (0);
}
