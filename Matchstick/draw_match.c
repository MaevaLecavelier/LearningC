/*
  * Matchstick project - draw file
*/

#include "header.h"


//function for getting the parameters of the game
int   *get_params(char **argv)
{
  int   *params;

  params = malloc(2*sizeof(int));
  params[0] = my_getnbr(argv[1]);
  params[1] = my_getnbr(argv[2]);

  return (params);
}


// draw a line, takes the size of the game and the number of sticks to draw
char  *create_line(int max, int current)
{
  char  *line;
  int   nb_space;
  int   i;

  line = (char*) malloc( (max + 3) * sizeof(char));

  if(current == 0)
  {
    for(int i = 0; i < max+2; i++)
      line[i] = '*';
  }
  else
  {
    nb_space = max - current;
    line[0]= '*';
    i = 0;
    while(nb_space)
    {
      line[1 + i] = ' ';
      line[max - i] = ' ';
      i++;
      nb_space = nb_space - 2;
    }
    while(i <= max/2 )
    {
      line[1 + i] = '|';
      line[max - i] = '|';
      i++;
    }

    line[max+1] = '*';

  }
  line[max+2] = '\0';
  return (line);

}

/*
  * function that will create the current map
  * Parameters : array of int.
  * the first elements of game is the first line of our game
  * and game[i] is the current number of sticks on the i-th line.
  *
*/
char   **create_game(int *param)
{
  int   nb_lines;
  int   i;
  int   nb_max_sticks; //number of sticks on the first line
  int   current_sticks;
  int   cpt;
  char  **map;
  char  *current_line;


  i = 0;
  nb_lines = param[0];
  nb_max_sticks = 2*nb_lines - 1;
  cpt = nb_lines + 1;

  //char  map[nb_lines + 2][nb_max_sticks + 3];
  map = malloc((nb_lines + 2)*sizeof(char*));
  while(i < nb_lines + 2)
  {
    map[i] = malloc((nb_max_sticks + 2)*sizeof(char));
    i++;
  }
  strcpy(map[cpt], create_line(nb_max_sticks, 0)); // instancier la première ligne d'*
  cpt--;
  for(current_sticks = 1 ; current_sticks <= nb_max_sticks; current_sticks += 2)
  {
    strcpy(map[cpt], create_line(nb_max_sticks, current_sticks));
    cpt--;
  }
  strcpy(map[0], create_line(nb_max_sticks, 0)); //instancier la dernière ligne d'*

  return (map);
}


void  draw_game(char **map, int *param)
{
  int   i;
  int   j;
  int   nb_lines;

  nb_lines = param[0];
  i = nb_lines + 1;
  j = 0;

  for(; i >= 0; i--)
  {
    my_putstr(map[i]);
    my_putchar('\n');
  }
}

/*int   main(int argc, char **argv)
{
  char  **game;
  int   *param;

  param = get_params(argv);
  game = create_game(param);
  draw_game(game, param);
  free(game);
  free(param);


  return (0);
}*/
