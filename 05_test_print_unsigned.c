#include "header/ft_printf.h"
#include <string.h>
#include <limits.h>
int main()
{
	unsigned int	num = -5;
    int lon = 0;
    printf("***********************05_test_printf_uns**************************\n");
    printf("\n");
    printf("*************************(x<=z y<=z)*******************************\n");
    printf("(p-01) original printf	  |%%u|		:	|%u|	BASE->z (x=0 y=0)\n", num);
	ft_printf("(p-01) personal ft_printf |%%u|		:	|%u|	BASE->z (x=0 y=0)\n", num);
    printf("(p-02) original printf	  |%%.u|		:	|%.u|	BASE->z (x=0 y=0)\n", num);
	ft_printf("(p-02) personal ft_printf |%%.u|		:	|%.u|	BASE->z (x=0 y=0)\n", num);	
	printf("(p-03) original printf	  |%%-u|		:	|%-u|	BASE->z (x=0 y=0)\n", num);
	ft_printf("(p-03) personal ft_printf |%%-u|		:	|%-u|	BASE->z (x=0 y=0)\n", num);
	printf("(p-04) original printf	  |%%1u|		:	|%1u|	BASE->z (0<x<=z y=0)\n", num);
	ft_printf("(p-04) personal ft_printf |%%1u|		:	|%1u|	BASE->z (0<x<=z y=0)\n", num);
	printf("(p-05) original printf	  |%%-1u|	:	|%-1u|	BASE->z (0<x<=z y=0)\n", num);
	ft_printf("(p-05) personal ft_printf |%%-1u|	:	|%-1u|	BASE->z (0<x<=z y=0)\n", num);
	printf("*************************(x > z >= y)*******************************\n");
	printf("(p-06) original printf	  |%%20u|	:	|%20u|	BASE->x (x>z y=0)\n", num);
	ft_printf("(p-06) personal ft_printf |%%20u|	:	|%20u|	BASE->x (x>z y=0)\n", num);
    printf("(p-07) original printf	  |%%-20u|	:	|%-20u|	BASE->x (x>z y=0)\n", num);
	ft_printf("(p-07) personal ft_printf |%%-20u|	:	|%-20u|	BASE->x (x>z y=0)\n", num);
	printf("(p-08) original printf	  |%%20.3u|	:	|%20.3u|	BASE->x (x>z y=0)\n", num);
	ft_printf("(p-08) personal ft_printf |%%20.3u|	:	|%20.3u|	BASE->x (x>z y=0)\n", num);
    printf("(p-09) original printf	  |%%-20.3u|	:	|%-20.3u|	BASE->x (x>z y=0)\n", num);
	ft_printf("(p-09) personal ft_printf |%%-20.3u|	:	|%-20.3u|	BASE->x (x>z y=0)\n", num);
	printf("(p-10) original printf	  |%%020u|	:	|%020u|	BASE->x (x>z y=0)\n", num);
	ft_printf("(p-10) personal ft_printf |%%020u|	:	|%020u|	BASE->x (x>z y=0)\n", num);
    printf("(p-11) original printf	  |%%-020u|	:	|%-20u|	BASE->x (x>z y=0)\n", num);
	ft_printf("(p-11) personal ft_printf |%%-020u|	:	|%-020u|	BASE->x (x>z y=0)\n", num);	
    printf("********************************************************************\n");
    printf("\n");
	printf("*************************(x<=y z<y)*********************************\n"); 
	printf("(p-12) original printf	  |%%.20u|	:	|%.20u|	BASE->x (x>z y=0)\n", num);
	ft_printf("(p-12) personal ft_printf |%%.20u|	:	|%.20u|	BASE->x (x>z y=0)\n", num);
    printf("(p-13) original printf	  |%%-.20u|	:	|%-.20u|	BASE->x (x>z y=0)\n", num);
	ft_printf("(p-13) personal ft_printf |%%-.20u|	:	|%-.20u|	BASE->x (x>z y=0)\n", num);
    printf("********************************************************************\n");
    printf("\n");
	printf("*************************(x > y > z)********************************\n");
	printf("(p-14) original printf	  |%%20.15u|	:	|%20.15u|	BASE->x (x>z y=0)\n", num);
	ft_printf("(p-14) personal ft_printf |%%20.15u|	:	|%20.15u|	BASE->x (x>z y=0)\n", num);
    printf("(p-15) original printf	  |%%-20.15u|	:	|%-20.15u|	BASE->x (x>z y=0)\n", num);
	ft_printf("(p-15) personal ft_printf |%%-20.15u|	:	|%-20.15u|	BASE->x (x>z y=0)\n", num);
    printf("********************************************************************\n");
	printf("\n");																				
	printf("*************************(ESPECIAL argv = 0)*************************\n");	
	printf("(d-16) original printf	  %%.u		: |%.u|	BASE->0 (x=0 y=0 z=0)\n", 0);	
	ft_printf("(d-16) personal ft_printf %%.u		: |%.u|	BASE->0 (x=0 y=0 z=0)\n", 0);
	printf("(d-17) original printf	  %%3.u		: |%3.u|	BASE->x (x>z y=0 z=0)\n", 0);	
	ft_printf("(d-17) personal ft_printf %%3.u		: |%3.u|	BASE->x (x>z y=0 z=0)\n", 0);
	printf("(d-18) original printf	  %%-.u		: |%-.u|	BASE->0 (x=0 y=0 z=0)\n", 0);	
	ft_printf("(d-18) personal ft_printf %%-.u		: |%-.u|	BASE->0 (x=0 y=0 z=0)\n", 0);
	printf("(d-19) original printf	  %%-3.u		: |%-3.u|	BASE->x (x>z y=0 z=0)\n", 0);	
	ft_printf("(d-19) personal ft_printf %%-3.u		: |%-3.u|	BASE->x (x>z y=0 z=0)\n", 0);	
    printf("********************************************************************\n");	
    printf("\n");
	printf("*************************LONGITUDES**********************************\n");
	printf("%% 20u es 100: |");
	lon = printf("% 20u", 100);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("%% 20u es 100: |");
	lon = ft_printf("% 20u", 100);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);

	printf("%%+20u es 100: |");
	lon = printf("%+20u", 100);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("%%+20u es 100: |");
	lon = ft_printf("%+20u", 100);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);

	printf("%%020u es 100: |");
	lon = printf("%020u", 100);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("%%020u es 100: |");
	lon = ft_printf("%020u", 100);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);

	printf("%%0+20u es 100: |");
	lon = printf("%0+20u", 100);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("%%0+20u es 100: |");
	lon = ft_printf("%0+20u", 100);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);

	printf("%%0+20.u es 100: |");
	lon = printf("%0+20.u", 100);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("%%0+20.u es 100: |");
	lon = ft_printf("%0+20.u", 100);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);	

	printf("%%0 20u es 100: |");
	lon = printf("%0 20u", 100);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("%%0 20u es 100: |");
	lon = ft_printf("%0 20u", 100);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);

	printf("%%0 20.u es 100: |");
	lon = printf("%0 20.u", 100);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("%%0 20.u es 100: |");
	lon = ft_printf("%0 20.u", 100);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);

	printf("%% 20u es -100: |");
	lon = printf("% 20u", -100);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("%% 20u es -100: |");
	lon = ft_printf("% 20u", -100);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);

	printf("%%+20ues -100: |");
	lon = printf("%+20u", -100);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("%%+20ues -100: |");
	lon = ft_printf("%+20u", -100);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);

	printf("%%020u es -100: |");
	lon = printf("%020u", -100);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("%%020u es -100: |");
	lon = ft_printf("%020u", -100);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);

	printf("%%0+20u es -100: |");
	lon = printf("%0+20u", -100);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("%%0+20u es -100: |");
	lon = ft_printf("%0+20u", -100);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);

	printf("%%0+20.u es -100: |");
	lon = printf("%0+20.u", -100);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("%%0+20.u es -100: |");
	lon = ft_printf("%0+20.u", -100);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);	

	printf("%%0 20u es -100: |");
	lon = printf("%0 20u", -100);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("%%0 20u es -100: |");
	lon = ft_printf("%0 20u", -100);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);

	printf("%%0 20.u es -100: |");
	lon = printf("%0 20.u", -100);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("%%0 20.u es -100: |");
	lon = ft_printf("%0 20.u", -100);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);
	printf("*********************************************************************\n");	
    printf("\n");
	printf("*************************CASOS DE ERROR******************************\n");
	printf("CASO 1): '%%020.15u'\n");
	printf("ERROR 1): %020.15u\n", num);
	ft_printf("ERROR 1): %020.15u\n", num);
	printf("\nCASO 2): '%%+u'\n");
	printf("ERROR 2): %+u\n", num);
	ft_printf("ERROR 2): %+u\n", num);
	printf("\nCASO 3): '%% u'\n");
	printf("ERROR 3): % u\n", num);
	ft_printf("ERROR 3): % u\n", num);
	printf("\nCASO 4): '%%#u'\n");
	printf("ERROR 4): %#u\n", num);
	ft_printf("ERROR 4): %#u\n", num);
	printf("\n");
	printf("*********************************************************************\n");
    return (0);
}