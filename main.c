#include "header/ft_printf.h"

int main()
{
	printf("|%-10.3s|	BASE->x (x>z 0<y<z)\n", "12345");
printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    ft_printf("|%-10.3s|	BASE->x (x>z 0<y<z)\n", "12345");
	return (0);
}
