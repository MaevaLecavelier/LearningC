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

int   my_getnbr(char const *str)
{
  int   res;
  int   cpt;
  int   cpt_int;
  int   is_neg;

  cpt = 0;
  cpt_int = 0;
  is_neg = 1;
  res = 0;

  while(str[cpt] != '\0' &&(str[cpt] == '+' || str[cpt] == '-'))
  {
    if(str[cpt] == '-')
      is_neg = is_neg * (-1);
    cpt += 1;
  }

  while(str[cpt] <= 57 && str[cpt] >= 48)
  {
    res = res*10 + str[cpt] - 48;
    cpt_int += 1;
    cpt += 1;
  }

  res = res*is_neg;
  if(cpt_int > 11) return(0);
  return(res);

}

int   my_str_isnum(char const *str)
{
  int   i;

  i = 0;
  while(str[i] != '\0')
  {
    if(!(str[i] >= '0' && str[i] <= '9'))
      return (0);
    i++;
  }
  return (1);
}
