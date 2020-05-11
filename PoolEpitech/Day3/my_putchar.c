/*
	* my_putchar
	* Maëva Lecavelier
*/

#include <unistd.h>

void	my_putchar(char c)
{
	write(1, &c, 1);
}


