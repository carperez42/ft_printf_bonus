#include "header/ft_printf.h"
#include <string.h>

void	ft_leaks()
{
	system("leaks a.out");
}

int	main()
{
	atexit(ft_leaks);
    int lon = 0;
	ft_printf("*********************02_test_printf_int**************************\n");
	ft_printf("\n");		
	printf("*************************(x<=z y<=z)********************************\n");			
	printf("(d-01) original printf	  %%d	: |%d|	BASE->z (x=0 y=0)\n", 12345);					   
	ft_printf("(d-01) personal ft_printf %%d	: |%d|	BASE->z (x=0 y=0)\n", 12345);				
	printf("(d-02) original printf	  %%+d	: |%+d|	BASE->z (x=0 y=0)\n", 12345);					
	ft_printf("(d-02) personal ft_printf %%+d	: |%+d|	BASE->z (x=0 y=0)\n", 12345);				
	printf("(d-03) original printf	  %% d	: |% d|	BASE->z (x=0 y=0)\n", 12345);					
	ft_printf("(d-03) personal ft_printf %% d	: |% d|	BASE->z (x=0 y=0)\n", 12345);				
	printf("(d-04) original printf	  %%d	: |%d|	BASE->z (x=0 y=0)\n", -12345);					    
	ft_printf("(d-04) personal ft_printf %%d	: |%d|	BASE->z (x=0 y=0)\n", -12345);				   
	printf("(d-05) original printf	  %%+d	: |%+d|	BASE->z (x=0 y=0)\n", -12345);					
	ft_printf("(d-05) personal ft_printf %%+d	: |%+d|	BASE->z (x=0 y=0)\n", -12345);				
	printf("(d-06) original printf	  %% d	: |% d|	BASE->z (x=0 y=0)\n", -12345);					
	ft_printf("(d-06) personal ft_printf %% d	: |% d|	BASE->z (x=0 y=0)\n", -12345);				
	ft_printf("******************************************************************\n");		
	printf("(d-07) original printf	  %%03d	: |%03d|	BASE->z (0<x<=z y=0)\n", 12345);	
	ft_printf("(d-07) personal ft_printf %%03d	: |%03d|	BASE->z (0<x<=z y=0)\n", 12345);		
	printf("(d-08) original printf	  %%+03d	: |%+03d|	BASE->z (0<x<=z y=0)\n", 12345);		
	ft_printf("(d-08) personal ft_printf %%+03d	: |%+03d|	BASE->z (0<x<=z y=0)\n", 12345);	
	printf("(d-09) original printf	  %% 03d	: |% 03d|	BASE->z (0<x<=z y=0)\n", 12345);	
	ft_printf("(d-09) personal ft_printf %% 03d	: |% 03d|	BASE->z (0<x<=z y=0)\n", 12345);	
	printf("(d-10) original printf	  %%03d	: |%03d|	BASE->z (0<x<=z y=0)\n", -12345);		
	ft_printf("(d-10) personal ft_printf %%03d	: |%03d|	BASE->z (0<x<=z y=0)\n", -12345);	
	printf("(d-11) original printf	  %%+03d	: |%+03d|	BASE->z (0<x<=z y=0)\n", -12345);	
	ft_printf("(d-11) personal ft_printf %%+03d	: |%+03d|	BASE->z (0<x<=z y=0)\n", -12345);	
	printf("(d-12) original printf	  %% 03d	: |% 03d|	BASE->z (0<x<=z y=0)\n", -12345);	
	ft_printf("(d-12) personal ft_printf %% 03d	: |% 03d|	BASE->z (0<x<=z y=0)\n", -12345);	
	printf("********************************************************************\n");			
	printf("(d-13) original printf	  %%-d	: |%-d|	BASE->z (x=0 y=0)\n", 12345);				
	ft_printf("(d-13) personal ft_printf %%-d	: |%-d|	BASE->z (x=0 y=0)\n", 12345);			
	printf("(d-14) original printf	  %%+-d	: |%+-d|	BASE->z (x=0 y=0)\n", 12345);			
	ft_printf("(d-14) personal ft_printf %%+-d	: |%+-d|	BASE->z (x=0 y=0)\n", 12345);		
	printf("(d-15) original printf	  %% -d	: |% -d|	BASE->z (x=0 y=0)\n", 12345);			
	ft_printf("(d-15) personal ft_printf %% -d	: |% -d|	BASE->z (x=0 y=0)\n", 12345);		
 	printf("(d-16) original printf	  %%-d	: |%-d|	BASE->z (x=0 y=0)\n", -12345);				
	ft_printf("(d-16) personal ft_printf %%-d	: |%-d|	BASE->z (x=0 y=0)\n", -12345);			
	printf("(d-17) original printf	  %%+-d	: |%+-d|	BASE->z (x=0 y=0)\n", -12345);			
	ft_printf("(d-17) personal ft_printf %%+-d	: |%+-d|	BASE->z (x=0 y=0)\n", -12345);		
	printf("(d-18) original printf	  %% -d	: |% -d|	BASE->z (x=0 y=0)\n", -12345);			
	ft_printf("(d-18) personal ft_printf %% -d	: |% -d|	BASE->z (x=0 y=0)\n", -12345);		
	printf("********************************************************************\n");			
	printf("\n");
	printf("*************************(x<=y z<y)*********************************\n");
	printf("(d-19) original printf	  %%.10d		: |%.10d|	BASE->y (x=0 z<y)\n", 12345);	
	ft_printf("(d-19) personal ft_printf %%.10d		: |%.10d|	BASE->y (x=0 z<y)\n", 12345);	
	printf("(d-20) original printf	  %%+.10d	: |%+.10d|	BASE->y (x=0 z<y)\n", 12345);		
	ft_printf("(d-20) personal ft_printf %%+.10d	: |%+.10d|	BASE->y (x=0 z<y)\n", 12345);	
	printf("(d-21) original printf	  %% .10d	: |% .10d|	BASE->y (x=0 z<y)\n", 12345);		
	ft_printf("(d-21) personal ft_printf %% .10d	: |% .10d|	BASE->y (x=0 z<y)\n", 12345);	
	printf("(d-22) original printf	  %%.10d		: |%.10d|	BASE->y (x=0 z<y)\n", -12345);	
	ft_printf("(d-22) personal ft_printf %%.10d		: |%.10d|	BASE->y (x=0 z<y)\n", -12345);	
	printf("(d-23) original printf	  %%+.10d	: |%+.10d|	BASE->y (x=0 z<y)\n", -12345);		
	ft_printf("(d-23) personal ft_printf %%+.10d	: |%+.10d|	BASE->y (x=0 z<y)\n", -12345);	
	printf("(d-24) original printf	  %% .10d	: |% .10d|	BASE->y (x=0 z<y)\n", -12345);		
	ft_printf("(d-24) personal ft_printf %% .10d	: |% .10d|	BASE->y (x=0 z<y)\n", -12345);	
	printf("********************************************************************\n");			
	printf("(d-25) original printf	  %%.010d	: |%.010d|	BASE->y (x=0 z<y)\n", 12345);		
	ft_printf("(d-25) personal ft_printf %%.010d	: |%.010d|	BASE->y (x=0 z<y)\n", 12345);	
	printf("(d-26) original printf	  %%+.010d	: |%+.010d|	BASE->y (x=0 z<y)\n", 12345);		
	ft_printf("(d-26) personal ft_printf %%+.010d	: |%+.010d|	BASE->y (x=0 z<y)\n", 12345);	
	printf("(d-27) original printf	  %% .010d	: |% .010d|	BASE->y (x=0 z<y)\n", 12345);		
	ft_printf("(d-27) personal ft_printf %% .010d	: |% .010d|	BASE->y (x=0 z<y)\n", 12345);	
	printf("(d-28) original printf	  %%.010d	: |%.010d|	BASE->y (x=0 z<y)\n", -12345);		
	ft_printf("(d-28) personal ft_printf %%.010d	: |%.010d|	BASE->y (x=0 z<y)\n", -12345);	
	printf("(d-29) original printf	  %%+.010d	: |%+.010d|	BASE->y (x=0 z<y)\n", -12345);		
	ft_printf("(d-29) personal ft_printf %%+.010d	: |%+.010d|	BASE->y (x=0 z<y)\n", -12345);	
	printf("(d-30) original printf	  %% .010d	: |% .010d|	BASE->y (x=0 z<y)\n", -12345);		
	ft_printf("(d-30) personal ft_printf %% .010d	: |% .010d|	BASE->y (x=0 z<y)\n", -12345);	
	printf("********************************************************************\n");			
	printf("(d-31) original printf	  %%-.10d	: |%-.10d|	BASE->y (x=0 z<y)\n", 12345);		
	ft_printf("(d-31) personal ft_printf %%-.10d	: |%-.10d|	BASE->y (x=0 z<y)\n", 12345);	
	printf("(d-32) original printf	  %%+-.10d	: |%+-.10d|	BASE->y (x=0 z<y)\n", 12345);		
	ft_printf("(d-32) personal ft_printf %%+-.10d	: |%+-.10d|	BASE->y (x=0 z<y)\n", 12345);	
	printf("(d-33) original printf	  %% -.10d	: |% -.10d|	BASE->y (x=0 z<y)\n", 12345);		
	ft_printf("(d-33) personal ft_printf %% -.10d	: |% -.10d|	BASE->y (x=0 z<y)\n", 12345);	
	printf("(d-34) original printf	  %%-.10d	: |%-.10d|	BASE->y (x=0 z<y)\n", -12345);		
	ft_printf("(d-34) personal ft_printf %%-.10d	: |%-.10d|	BASE->y (x=0 z<y)\n", -12345);	
	printf("(d-35) original printf	  %%+-.10d	: |%+-.10d|	BASE->y (x=0 z<y)\n", -12345);		
	ft_printf("(d-35) personal ft_printf %%+-.10d	: |%+-.10d|	BASE->y (x=0 z<y)\n", -12345);	
	printf("(d-36) original printf	  %% -.10d	: |% -.10d|	BASE->y (x=0 z<y)\n", -12345);		
	ft_printf("(d-36) personal ft_printf %% -.10d	: |% -.10d|	BASE->y (x=0 z<y)\n", -12345);	
	printf("********************************************************************\n");			
	printf("(d-37) original printf	  %%10.10d	: |%10.10d|	BASE->y (x=y z<y)\n", 12345);		
	ft_printf("(d-37) personal ft_printf %%10.10d	: |%10.10d|	BASE->y (x=y z<y)\n", 12345);	
	printf("(d-38) original printf	  %%+10.10d	: |%+10.10d|	BASE->y (x=y z<y)\n", 12345);	
	ft_printf("(d-38) personal ft_printf %%+10.10d	: |%+10.10d|	BASE->y (x=y z<y)\n", 12345);	
	printf("(d-39) original printf	  %% 10.10d	: |% 10.10d|	BASE->y (x=y z<y)\n", 12345);	
	ft_printf("(d-39) personal ft_printf %% 10.10d	: |% 10.10d|	BASE->y (x=y z<y)\n", 12345);	
	printf("(d-40) original printf	  %%10.10d	: |%10.10d|	BASE->y (x=y z<y)\n", -12345);			
	ft_printf("(d-40) personal ft_printf %%10.10d	: |%10.10d|	BASE->y (x=y z<y)\n", -12345);		
	printf("(d-41) original printf	  %%+10.10d	: |%+10.10d|	BASE->y (x=y z<y)\n", -12345);	
	ft_printf("(d-41) personal ft_printf %%+10.10d	: |%+10.10d|	BASE->y (x=y z<y)\n", -12345);
	printf("(d-42) original printf	  %% 10.10d	: |% 10.10d|	BASE->y (x=y z<y)\n", -12345);	
	ft_printf("(d-42) personal ft_printf %% 10.10d	: |% 10.10d|	BASE->y (x=y z<y)\n", -12345);	
	printf("********************************************************************\n");			
	printf("(d-43) original printf	  %%-10.10d	:	|%-10.10d|	BASE->y (x=y z<y)\n", 12345);	
	ft_printf("(d-43) personal ft_printf %%-10.10d	:	|%-10.10d|	BASE->y (x=y z<y)\n", 12345);
	printf("(d-44) original printf	  %%+-10.10d	:	|%+-10.10d|	BASE->y (x=y z<y)\n", 12345);	
	ft_printf("(d-44) personal ft_printf %%+-10.10d	:	|%+-10.10d|	BASE->y (x=y z<y)\n", 12345);
	printf("(d-45) original printf	  %% -10.10d	:	|% -10.10d|	BASE->y (x=y z<y)\n", 12345);	
	ft_printf("(d-45) personal ft_printf %% -10.10d	:	|% -10.10d|	BASE->y (x=y z<y)\n", 12345);
	printf("(d-46) original printf	  %%-10.10d	:	|%-10.10d|	BASE->y (x=y z<y)\n", -12345);	
	ft_printf("(d-46) personal ft_printf %%-10.10d	:	|%-10.10d|	BASE->y (x=y z<y)\n", -12345);
	printf("(d-47) original printf	  %%+-10.10d	:	|%+-10.10d|	BASE->y (x=y z<y)\n", -12345);
	ft_printf("(d-47) personal ft_printf %%+-10.10d	:	|%+-10.10d|	BASE->y (x=y z<y)\n", -12345);
	printf("(d-48) original printf	  %% -10.10d	:	|% -10.10d|	BASE->y (x=y z<y)\n", -12345);
	ft_printf("(d-48) personal ft_printf %% -10.10d	:	|% -10.10d|	BASE->y (x=y z<y)\n", -12345);
	printf("********************************************************************\n");		
	printf("\n");																				
	printf("*************************(x > z >= y)*******************************\n");			
	printf("(d-49) original printf	  %%10d	: |%10d|	BASE->x (x>z y=0)\n", 12345);		
	ft_printf("(d-49) personal ft_printf %%10d	: |%10d|	BASE->x (x>z y=0)\n", 12345);		
	printf("(d-50) original printf	  %%+10d	: |%+10d|	BASE->x (x>z y=0)\n", 12345);		
	ft_printf("(d-50) personal ft_printf %%+10d	: |%+10d|	BASE->x (x>z y=0)\n", 12345);		
	printf("(d-51) original printf	  %% 10d	: |% 10d|	BASE->x (x>z y=0)\n", 12345);	
	ft_printf("(d-51) personal ft_printf %% 10d	: |% 10d|	BASE->x (x>z y=0)\n", 12345);		
	printf("(d-52) original printf	  %%10d	: |%10d|	BASE->x (x>z y=0)\n", -12345);			
	ft_printf("(d-52) personal ft_printf %%10d	: |%10d|	BASE->x (x>z y=0)\n", -12345);	
	printf("(d-53) original printf	  %%+10d	: |%+10d|	BASE->x (x>z y=0)\n", -12345);	
	ft_printf("(d-53) personal ft_printf %%+10d	: |%+10d|	BASE->x (x>z y=0)\n", -12345);		
	printf("(d-54) original printf	  %% 10d	: |% 10d|	BASE->x (x>z y=0)\n", -12345);	
	ft_printf("(d-54) personal ft_printf %% 10d	: |% 10d|	BASE->x (x>z y=0)\n", -12345);		
	printf("*********************************************************************\n");			
	printf("(d-55) original printf	  %%-10d		: |%-10d|	BASE->x (x>z y=0)\n", 12345);	
	ft_printf("(d-55) personal ft_printf %%-10d		: |%-10d|	BASE->x (x>z y=0)\n", 12345);
	printf("(d-56) original printf	  %%+-10d	: |%+-10d|	BASE->x (x>z y=0)\n", 12345);	
	ft_printf("(d-56) personal ft_printf %%+-10d	: |%+-10d|	BASE->x (x>z y=0)\n", 12345);
	printf("(d-57) original printf	  %% -10d	: |% -10d|	BASE->x (x>z y=0)\n", 12345);	
	ft_printf("(d-57) personal ft_printf %% -10d	: |% -10d|	BASE->x (x>z y=0)\n", 12345);
	printf("(d-58) original printf	  %%-10d		: |%-10d|	BASE->x (x>z y=0)\n", -12345);	
	ft_printf("(d-58) personal ft_printf %%-10d		: |%-10d|	BASE->x (x>z y=0)\n", -12345);
	printf("(d-59) original printf	  %%+-10d	: |%+-10d|	BASE->x (x>z y=0)\n", -12345);	
	ft_printf("(d-59) personal ft_printf %%+-10d	: |%+-10d|	BASE->x (x>z y=0)\n", -12345);
	printf("(d-60) original printf	  %% -10d	: |% -10d|	BASE->x (x>z y=0)\n", -12345);	
	ft_printf("(d-60) personal ft_printf %% -10d	: |% -10d|	BASE->x (x>z y=0)\n", -12345);
	printf("*********************************************************************\n");			
	printf("(d-61) original printf	  %%010d		: |%010d|	BASE->x (x>z y=0)\n", 12345);		
	ft_printf("(d-61) personal ft_printf %%010d		: |%010d|	BASE->x (x>z y=0)\n", 12345);	
	printf("(d-62) original printf	  %%+010d	: |%+010d|	BASE->x (x>z y=0)\n", 12345);		
	ft_printf("(d-62) personal ft_printf %%+010d	: |%+010d|	BASE->x (x>z y=0)\n", 12345);	
	printf("(d-63) original printf	  %% 010d	: |% 010d|	BASE->x (x>z y=0)\n", 12345);		
	ft_printf("(d-63) personal ft_printf %% 010d	: |% 010d|	BASE->x (x>z y=0)\n", 12345);	
	printf("(d-64) original printf	  %%010d		: |%010d|	BASE->x (x>z y=0)\n", -12345);		
	ft_printf("(d-64) personal ft_printf %%010d		: |%010d|	BASE->x (x>z y=0)\n", -12345);	
	printf("(d-65) original printf	  %%+010d	: |%+010d|	BASE->x (x>z y=0)\n", -12345);		
	ft_printf("(d-65) personal ft_printf %%+010d	: |%+010d|	BASE->x (x>z y=0)\n", -12345);	
	printf("(d-66) original printf	  %% 010d	: |% 010d|	BASE->x (x>z y=0)\n", -12345);		
	ft_printf("(d-66) personal ft_printf %% 010d	: |% 010d|	BASE->x (x>z y=0)\n", -12345);	
	printf("*********************************************************************\n");			
	printf("(d-67) original printf	  %%10.3d	: |%10.3d|	BASE->x (x>z y<=z>)\n", 12345);			
	ft_printf("(d-67) personal ft_printf %%10.3d	: |%10.3d|	BASE->x (x>z y<=z>)\n", 12345);		
	printf("(d-68) original printf	  %%+10.3d	: |%+10.3d|	BASE->x (x>z y<=z>)\n", 12345);			
	ft_printf("(d-68) personal ft_printf %%+10.3d	: |%+10.3d|	BASE->x (x>z y<=z>)\n", 12345);		
	printf("(d-69) original printf	  %% 10.3d	: |% 10.3d|	BASE->x (x>z y<=z>)\n", 12345);			
	ft_printf("(d-69) personal ft_printf %% 10.3d	: |% 10.3d|	BASE->x (x>z y<=z>)\n", 12345);		
	printf("(d-70) original printf	  %%10.3d	: |%10.3d|	BASE->x (x>z y<=z>)\n", -12345);		
	ft_printf("(d-70) personal ft_printf %%10.3d	: |%10.3d|	BASE->x (x>z y<=z>)\n", -12345);	
	printf("(d-71) original printf	  %%+10.3d	: |%+10.3d|	BASE->x (x>z y<=z>)\n", -12345);		
	ft_printf("(d-71) personal ft_printf %%+10.3d	: |%+10.3d|	BASE->x (x>z y<=z>)\n", -12345);	
	printf("(d-72) original printf	  %% 10.3d	: |% 10.3d|	BASE->x (x>z y<=z>)\n", -12345);		
	ft_printf("(d-72) personal ft_printf %% 10.3d	: |% 10.3d|	BASE->x (x>z y<=z>)\n", -12345);	
	printf("*********************************************************************\n");			
	printf("(d-73) original printf	  %%-10.3d	: |%-10.3d|	BASE->x (x>z y<=z>)\n", 12345);			
	ft_printf("(d-73) personal ft_printf %%-10.3d	: |%-10.3d|	BASE->x (x>z y<=z>)\n", 12345);		
	printf("(d-74) original printf	  %%+-10.3d	: |%+-10.3d|	BASE->x (x>z y<=z>)\n", 12345);	
	ft_printf("(d-74) personal ft_printf %%+-10.3d	: |%+-10.3d|	BASE->x (x>z y<=z>)\n", 12345);
	printf("(d-75) original printf	  %% -10.3d	: |% -10.3d|	BASE->x (x>z y<=z>)\n", 12345);	
	ft_printf("(d-75) personal ft_printf %% -10.3d	: |% -10.3d|	BASE->x (x>z y<=z>)\n", 12345);	
	printf("(d-76) original printf	  %%-10.3d	: |%-10.3d|	BASE->x (x>z y<=z>)\n", -12345);		
	ft_printf("(d-76) personal ft_printf %%-10.3d	: |%-10.3d|	BASE->x (x>z y<=z>)\n", -12345);	
	printf("(d-77) original printf	  %%+-10.3d	: |%+-10.3d|	BASE->x (x>z y<=z>)\n", -12345);
	ft_printf("(d-77) personal ft_printf %%+-10.3d	: |%+-10.3d|	BASE->x (x>z y<=z>)\n", -12345);
	printf("(d-78) original printf	  %% -10.3d	: |% -10.3d|	BASE->x (x>z y<=z>)\n", -12345);
	ft_printf("(d-78) personal ft_printf %% -10.3d	: |% -10.3d|	BASE->x (x>z y<=z>)\n", -12345);
	printf("*********************************************************************\n");			
	printf("\n");																				
	printf("*************************(x > y > z)*********************************\n");			
	printf("(d-79) original printf	  %%10.6d	: |%10.6d|	BASE->x (x>y y>z)\n", 12345);			
	ft_printf("(d-79) personal ft_printf %%10.6d	: |%10.6d|	BASE->x (x>y y>z)\n", 12345);		
	printf("(d-80) original printf	  %%+10.6d	: |%+10.6d|	BASE->x (x>y y>z)\n", 12345);			
	ft_printf("(d-80) personal ft_printf %%+10.6d	: |%+10.6d|	BASE->x (x>y y>z)\n", 12345);		
	printf("(d-81) original printf	  %% 10.6d	: |% 10.6d|	BASE->x (x>y y>z)\n", 12345);			
	ft_printf("(d-81) personal ft_printf %% 10.6d	: |% 10.6d|	BASE->x (x>y y>z)\n", 12345);		
	printf("(d-82) original printf	  %%10.6d	: |%10.6d|	BASE->x (x>y y>z)\n", -12345);			
	ft_printf("(d-82) personal ft_printf %%10.6d	: |%10.6d|	BASE->x (x>y y>z)\n", -12345);		
	printf("(d-83) original printf	  %%+10.6d	: |%+10.6d|	BASE->x (x>y y>z)\n", -12345);			
	ft_printf("(d-83) personal ft_printf %%+10.6d	: |%+10.6d|	BASE->x (x>y y>z)\n", -12345);		
	printf("(d-84) original printf	  %% 10.6d	: |% 10.6d|	BASE->x (x>y y>z)\n", -12345);			
	ft_printf("(d-84) personal ft_printf %% 10.6d	: |% 10.6d|	BASE->x (x>y y>z)\n", -12345);		    
	printf("*********************************************************************\n");			
	printf("(d-85) original printf	  %%10.06d	: |%10.06d|	BASE->x (x>y y>z)\n", 12345);			    
	ft_printf("(d-85) personal ft_printf %%10.06d	: |%10.06d|	BASE->x (x>y y>z)\n", 12345);		    
	printf("(d-86) original printf	  %%+10.06d	: |%+10.06d|	BASE->x (x>y y>z)\n", 12345);	
	ft_printf("(d-86) personal ft_printf %% 10.06d	: |% 10.06d|	BASE->x (x>y y>z)\n", 12345);	    
	printf("(d-87) original printf	  %%10.06d	: |%10.06d|	BASE->x (x>y y>z)\n", -12345);			    
	ft_printf("(d-87) personal ft_printf %%10.06d	: |%10.06d|	BASE->x (x>y y>z)\n", -12345);		    
	printf("(d-88) original printf	  %%+10.06d	: |%+10.06d|	BASE->x (x>y y>z)\n", -12345);	
	ft_printf("(d-88) personal ft_printf %% 10.06d	: |% 10.06d|	BASE->x (x>y y>z)\n", -12345);	    
	printf("*********************************************************************\n");			
	printf("(d-89) original printf	  %%-10.6d	: |%-10.6d|	BASE->x (x>y y>z)\n", 12345);			    
	ft_printf("(d-89) personal ft_printf %%-10.6d	: |%-10.6d|	BASE->x (x>y y>z)\n", 12345);		    
	printf("(d-90) original printf	  %%+-10.6d	: |%+-10.6d|	BASE->x (x>y y>z)\n", 12345);
	ft_printf("(d-90) personal ft_printf %%+-10.6d	: |%+-10.6d|	BASE->x (x>y y>z)\n", 12345);	    
	printf("(d-91) original printf	  %% -10.6d	: |% -10.6d|	BASE->x (x>y y>z)\n", 12345);	
	ft_printf("(d-91) personal ft_printf %% -10.6d	: |% -10.6d|	BASE->x (x>y y>z)\n", 12345);	    
	printf("(d-92) original printf	  %%-10.6d	: |%-10.6d|	BASE->x (x>y y>z)\n", -12345);			    
	ft_printf("(d-92) personal ft_printf %%-10.6d	: |%-10.6d|	BASE->x (x>y y>z)\n", -12345);		
	printf("(d-93) original printf	  %%+-10.6d	: |%+-10.6d|	BASE->x (x>y y>z)\n", -12345);	
	ft_printf("(d-93) personal ft_printf %%+-10.6d	: |%+-10.6d|	BASE->x (x>y y>z)\n", -12345);	
	printf("(d-94) original printf	  %% -10.6d	: |% -10.6d|	BASE->x (x>y y>z)\n", -12345);	
	ft_printf("(d-94) personal ft_printf %% -10.6d	: |% -10.6d|	BASE->x (x>y y>z)\n", -12345);	
	printf("*********************************************************************\n");
	printf("\n");																				
	printf("*************************(ESPECIAL argv = 0)*************************\n");	
	printf("(d-95) original printf	  %%.d		: |%.d|	BASE->0 (x=0 y=0 z=0)\n", 0);	
	ft_printf("(d-95) personal ft_printf %%.d		: |%.d|	BASE->0 (x=0 y=0 z=0)\n", 0);
	printf("(d-96) original printf	  %%3.d		: |%3.d|	BASE->x (x>z y=0 z=0)\n", 0);	
	ft_printf("(d-96) personal ft_printf %%3.d		: |%3.d|	BASE->x (x>z y=0 z=0)\n", 0);
	printf("(d-97) original printf	  %%+.d		: |%+.d|	BASE->1 (x=0 y=0 z=0)\n", 0);	
	ft_printf("(d-97) personal ft_printf %%+.d		: |%+.d|	BASE->1 (x=0 y=0 z=0)\n", 0);
	printf("(d-98) original printf	  %%+3.d		: |%+3.d|	BASE->x (x>z y=0 z=0)\n", 0);	
	ft_printf("(d-98) personal ft_printf %%+3.d		: |%+3.d|	BASE->x (x>z y=0 z=0)\n", 0);
	printf("(d-99) original printf	  %% .d		: |% .d|	BASE->1 (x=0 y=0 z=0)\n", 0);
	ft_printf("(d-99) personal ft_printf %% .d		: |% .d|	BASE->1 (x=0 y=0 z=0)\n", 0);
	printf("(d-100) original printf	  %% 3.d		: |% 3.d|	BASE->x (x>z y=0 z=0)\n", 0);	
	ft_printf("(d-100) personal ft_printf %% 3.d	: |% 3.d|	BASE->x (x>z y=0 z=0)\n", 0);
	printf("(d-101) original printf	  %%-+.d		: |%-+.d|	BASE->1 (x=0 y=0 z=0)\n", 0);	
	ft_printf("(d-101) personal ft_printf %%-+.d	: |%-+.d|	BASE->1 (x=0 y=0 z=0)\n", 0);
	printf("(d-102) original printf	  %%-+3.d	: |%-+3.d|	BASE->x (x>z y=0 z=0)\n", 0);	
	ft_printf("(d-102) personal ft_printf %%-+3.d	: |%-+3.d|	BASE->x (x>z y=0 z=0)\n", 0);
	printf("(d-103) original printf	  %%- .d		: |%- .d|	BASE->1 (x=0 y=0 z=0)\n", 0);
	ft_printf("(d-103) personal ft_printf %%- .d	: |%- .d|	BASE->1 (x=0 y=0 z=0)\n", 0);
	printf("(d-104) original printf	  %%- 3.d	: |%- 3.d|	BASE->x (x>z y=0 z=0)\n", 0);	
	ft_printf("(d-104) personal ft_printf %%- 3.d	: |%- 3.d|	BASE->x (x>z y=0 z=0)\n", 0);	
	printf("*********************************************************************\n");
    printf("\n");
	printf("*************************LONGITUDES**********************************\n");
	printf("%% 5d es 100: |");
	lon = printf("% 5d", 100);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("%% 5d es 100: |");
	lon = ft_printf("% 5d", 100);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);

	printf("%%+5d es 100: |");
	lon = printf("%+5d", 100);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("%%+5d es 100: |");
	lon = ft_printf("%+5d", 100);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);

	printf("%%05d es 100: |");
	lon = printf("%05d", 100);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("%%05d es 100: |");
	lon = ft_printf("%05d", 100);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);

	printf("%%0+5d es 100: |");
	lon = printf("%0+5d", 100);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("%%0+5d es 100: |");
	lon = ft_printf("%0+5d", 100);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);

	printf("%%0+5.d es 100: |");
	lon = printf("%0+5.d", 100);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("%%0+5.d es 100: |");
	lon = ft_printf("%0+5.d", 100);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);	

	printf("%%0 5d es 100: |");
	lon = printf("%0 5d", 100);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("%%0 5d es 100: |");
	lon = ft_printf("%0 5d", 100);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);

	printf("%%0 5.d es 100: |");
	lon = printf("%0 5.d", 100);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("%%0 5.d es 100: |");
	lon = ft_printf("%0 5.d", 100);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);

	printf("%% 5d es -100: |");
	lon = printf("% 5d", -100);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("%% 5d es -100: |");
	lon = ft_printf("% 5d", -100);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);

	printf("%%+5d es -100: |");
	lon = printf("%+5d", -100);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("%%+5d es -100: |");
	lon = ft_printf("%+5d", -100);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);

	printf("%%05d es -100: |");
	lon = printf("%05d", -100);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("%%05d es -100: |");
	lon = ft_printf("%05d", -100);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);

	printf("%%0+5d es -100: |");
	lon = printf("%0+5d", -100);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("%%0+5d es -100: |");
	lon = ft_printf("%0+5d", -100);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);

	printf("%%0+5.d es -100: |");
	lon = printf("%0+5.d", -100);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("%%0+5.d es -100: |");
	lon = ft_printf("%0+5.d", -100);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);	

	printf("%%0 5d es -100: |");
	lon = printf("%0 5d", -100);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("%%0 5d es -100: |");
	lon = ft_printf("%0 5d", -100);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);

	printf("%%0 5.d es -100: |");
	lon = printf("%0 5.d", -100);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf("%%0 5.d es -100: |");
	lon = ft_printf("%0 5.d", -100);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);
	printf("*********************************************************************\n");  	
	printf("\n");
	printf("*************************CASOS DE ERROR******************************\n");
	ft_printf("CASO 1): '%%          d'\n");
	printf("ERROR 1): |%          d|\n", 12345);
	ft_printf("ERROR 1): |%          d|\n", 12345);
	ft_printf("\nCASO 2): '%%++++++++++d'\n");
	printf("ERROR 2): |%++++++++++d|\n", 12345);
	ft_printf("ERROR 2): |%++++++++++d|\n", 12345);
	ft_printf("\nCASO 3): '%%#10d'\n");
	printf("ERROR 3): |%#10d|\n", 12345);
	ft_printf("ERROR 3): |%#10d|\n", 12345);
	ft_printf("\nCASO 4): '%% +10d'\n");
	printf("ERROR 4): |% +10d|\n", 12345);
	ft_printf("ERROR 4): |% +10d|\n", 12345);
	printf("\n");
	printf("*********************************************************************\n");
	return (0);
}

	