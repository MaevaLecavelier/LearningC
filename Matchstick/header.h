/*
  * Matchstick project - header file
*/


#ifndef   HEADER_FILE
#define   HEADER_FILE

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

//useful_functions.c
void	my_putchar(char c);
void  my_putstr(char *str);
void  my_put_nbr(int nb);
int   my_getnbr(char const *str);
int   my_str_isnum(char const *str);

//draw_match.c
void  draw_game(char **map, int *param);
char  **create_game(int *param);
char  *create_line(int max, int current);
int   *get_params(char **argv);

//errorManagment.c
int   problemLine(int line, char **map, int *params);
void  printPbLine(int pb);
int   problemMatch(int matches, int line, char **map, int *params);
void  printPbMatch(int pb, int *params);

//tools.c
int   isEmpty(int line, char **map);
int   notEnough(int matches, int line, char **map);

//updateGame.c
char **updateMap(char **map, int line, int matches, int *params);


#endif
