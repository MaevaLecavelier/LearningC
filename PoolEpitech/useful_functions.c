#include <unistd.h>


void	my_putchar(char c)
{
	write(1, &c, 1);
}


void  my_putstr(char *str)
{
  int   cpt;

  cpt = 0;
  while(str[cpt] != '\0')
  {
    write(1, &str[cpt], 1);
    cpt += 1;
  }
}


void   my_put_nbr(int nb)
{
  int   tmp;

  if(nb < 0)  {
    my_putchar('-');
    nb = nb * (-1);
  }

  if(nb >= 0)
  {
    if(nb < 10)
    {
      my_putchar(48 + nb);
    }
    else
    {
      tmp = nb % 10;
      nb = nb / 10;
      my_put_nbr(nb);
      my_putchar(48 + tmp);

    }
  }
}

int   my_strlen(char const *str)
{
  int   cpt;

  cpt = 0;
  while(str[cpt] != '\0')
  {
    cpt += 1;
  }

  return (cpt);
}

void  my_swap(int *a, int *b)
{
  int   tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}
