#include "header/ft_printf.h"
#include <string.h>

void	ft_leaks()
{
	system("leaks a.out");
}

int main()
{
	atexit(ft_leaks);
	int		num = 0, lon = 0;
	void	*p = &num;
    printf("***********************04_test_printf_ptr**************************\n");
    printf("\n");
    printf("*************************(x<=z y<=z)*******************************\n");
    printf("(p-01) original printf	  |%%p|		:	|%p|	BASE->z (x=0 y=0)\n", p);
	ft_printf("(p-01) personal ft_printf |%%p|		:	|%p|	BASE->z (x=0 y=0)\n", p);
	printf("(p-02) original printf	  |%%-p|		:	|%-p|	BASE->z (x=0 y=0)\n", p);
	ft_printf("(p-02) personal ft_printf |%%-p|		:	|%-p|	BASE->z (x=0 y=0)\n", p);
	printf("(p-03) original printf	  |%%1p|		:	|%1p|	BASE->z (0<x<=z y=0)\n", p);
	ft_printf("(p-03) personal ft_printf |%%1p|		:	|%1p|	BASE->z (0<x<=z y=0)\n", p);
	printf("(p-04) original printf	  |%%-1p|	:	|%-1p|	BASE->z (0<x<=z y=0)\n", p);
	ft_printf("(p-04) personal ft_printf |%%-1p|	:	|%-1p|	BASE->z (0<x<=z y=0)\n", p);
	printf("*************************(x > z >= y)*******************************\n");
	printf("(p-05) original printf	  |%%20p|	:	|%20p|	BASE->x (x>z y=0)\n", p);
	ft_printf("(p-05) personal ft_printf |%%20p|	:	|%20p|	BASE->x (x>z y=0)\n", p);
    printf("(p-06) original printf	  |%%-20p|	:	|%-20p|	BASE->x (x>z y=0)\n", p);
	ft_printf("(p-06) personal ft_printf |%%-20p|	:	|%-20p|	BASE->x (x>z y=0)\n", p);
    printf("*********************************************************************\n");
    printf("\n");
	printf("*************************(ESPECIALES)*******************************\n");
	printf("(p-07) original printf LONG_MIN / LONG_MAX:	|%p| |%p|\n", LONG_MIN, LONG_MAX);
	ft_printf("(p-07) original printf LONG_MIN / LONG_MAX:	|%p| |%p|\n", LONG_MIN, LONG_MAX);
    printf("(p-08) original printf 0 / 0:			|%p| |%p|\n", 0, 0);
	ft_printf("(p-08) original printf 0 / 0:			|%p| |%p|\n", 0, 0);
    printf("*********************************************************************\n");
    printf("\n");
	printf("*************************LONGITUDES**********************************\n");
	printf("'%%18p' de '\\0', 0 es: |");
	lon = printf("%-1p %-2p", '\0', 0);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("'%%18p' de '\\0', 0 es: |");
	lon = ft_printf("%-1p %-2p", '\0', 0);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);
	printf("'%%p' de NULL es: |");
	lon = printf("%p", NULL);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("'%%p' de NULL es: |");
	lon = ft_printf("%p", NULL);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);		
	printf("*********************************************************************\n");
    printf("\n");
	printf("*************************CASOS DE ERROR******************************\n");
	printf("CASO 1): '%%030p'\n");
	printf("ERROR 1): |%030p|\n", p);
	ft_printf("ERROR 1): |%030p|\n", p);
	printf("\nCASO 1): '%%0 30p'\n");
	printf("ERROR 1): |%0 30p|\n", p);
	ft_printf("ERROR 1): |%0 30p|\n", p);
	printf("\nCASO 1): '%%+0 30p'\n");
	printf("ERROR 1): |%+0 30p|\n", p);
	ft_printf("ERROR 1): |%+0 30p|\n", p);	
	printf("\nCASO 1): '%%+0 30.p'\n");
	printf("ERROR 1): |%+0 30.p|\n", p);
	ft_printf("ERROR 1): |%+0 30.p|\n", p);
	printf("\nCASO 1): '%%+0 30.20p'\n");
	printf("ERROR 1): |%+0 30.20p|\n", p);
	ft_printf("ERROR 1): |%+0 30.20p|\n", p);	
	printf("\nCASO 1): '%%-030p'\n");
	printf("ERROR 1): |%-030p|\n", p);
	ft_printf("ERROR 1): |%-030p|\n", p);
	printf("\nCASO 1): '%%-0 30p'\n");
	printf("ERROR 1): |%-0 30p|\n", p);
	ft_printf("ERROR 1): |%-0 30p|\n", p);
	printf("\nCASO 1): '%%-+0 30p'\n");
	printf("ERROR 1): |%-+0 30p|\n", p);
	ft_printf("ERROR 1): |%-+0 30p|\n", p);	
	printf("\nCASO 1): '%%-+0 30.p'\n");
	printf("ERROR 1): |%-+0 30.p|\n", p);
	ft_printf("ERROR 1): |%-+0 30.p|\n", p);
	printf("\nCASO 1): '%%-+0 30.20p'\n");
	printf("ERROR 1): |%-+0 30.20p|\n", p);
	ft_printf("ERROR 1): |%-+0 30.20p|\n", p);		
	printf("\nCASO 2): '%%+p'\n");
	printf("ERROR 2): |%+p|\n", p);
	ft_printf("ERROR 2): |%+p|\n", p);
	printf("\nCASO 3): '%% p'\n");
	printf("ERROR 3): |% p|\n", p);
	ft_printf("ERROR 3): |% p|\n", p);
	printf("\nCASO 4): '%%#p'\n");
	printf("ERROR 4): |%#p|\n", p);
	ft_printf("ERROR 4): |%#p|\n", p);
	printf("\nCASO 5): '%%.20p'\n");
	printf("ERROR 5): |%.20p|\n", p);
	ft_printf("ERROR 5): |%.20p|\n", p);
	printf("\nCASO 6): '%%0+ 100p'\n");
	printf("ERROR 6): |%0+ 100p|\n", p);
	ft_printf("ERROR 6): |%0+ 100p|\n", p);		
	printf("\n");
	printf("*********************************************************************\n");
	return (0);
}