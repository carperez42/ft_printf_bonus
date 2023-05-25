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
    int hex = 123;
    int hex2 = -123;
    int hex3 = -123;
	printf("***********************03_test_printf_hex**************************\n");
	printf("\n");		
    printf("*************************(x<=z y<=z)*******************************\n");
    printf("(x-01) original printf	  |%%x|    :   |%x|           BASE->z (x=0 y=0)\n", hex);                  //|7b|           BASE->z (x=0 y=0)
    ft_printf("(x-01) personal ft_printf |%%x|    :   |%x|           BASE->z (x=0 y=0)\n", hex);               //|7b|           BASE->z (x=0 y=0)
    printf("(x-02) original printf	  |%%0x|   :   |%0x|           BASE->z (x=0 y=0)\n", hex);                 //|7b|           BASE->z (x=0 y=0)
    ft_printf("(x-02) personal ft_printf |%%0x|   :   |%0x|           BASE->z (x=0 y=0)\n", hex);              //|7b|           BASE->z (x=0 y=0)
    printf("(x-03) original printf	  |%%-x|   :   |%-x|           BASE->z (x=0 y=0)\n", hex);                 //|7b|           BASE->z (x=0 y=0)
    ft_printf("(x-03) personal ft_printf |%%-x|   :   |%-x|           BASE->z (x=0 y=0)\n", hex);              //|7b|           BASE->z (x=0 y=0)
    printf("(x-04) original printf	  |%%#x|   :   |%#x|         BASE->z (x=0 y=0)\n", hex);                   //|0x7b|         BASE->z (x=0 y=0)
    ft_printf("(x-04) personal ft_printf |%%#x|   :   |%#x|         BASE->z (x=0 y=0)\n", hex);                //|0x7b|         BASE->z (x=0 y=0)
    printf("(x-05) original printf	  |%%#-x|  :   |%#-x|         BASE->z (x=0 y=0)\n", hex);                  //|0x7b|         BASE->z (x=0 y=0)
    ft_printf("(x-05) personal ft_printf |%%#-x|  :   |%#-x|         BASE->z (x=0 y=0)\n", hex);               //|0x7b|         BASE->z (x=0 y=0)
    printf("(x-06) original printf	  |%%x|    :   |%x|     BASE->z (x=0 y=0)\n", hex2);                       //|ffffff85|     BASE->z (x=0 y=0)
    ft_printf("(x-06) personal ft_printf |%%x|    :   |%x|     BASE->z (x=0 y=0)\n", hex2);                    //|ffffff85|     BASE->z (x=0 y=0)
    printf("(x-07) original printf	  |%%0x|   :   |%0x|     BASE->z (x=0 y=0)\n", hex2);                      //|ffffff85|     BASE->z (x=0 y=0)
    ft_printf("(x-07) personal ft_printf |%%0x|   :   |%0x|     BASE->z (x=0 y=0)\n", hex2);                   //|ffffff85|     BASE->z (x=0 y=0)   
    printf("(x-08) original printf	  |%%-x|   :   |%-x|     BASE->z (x=0 y=0)\n", hex2);                      //|ffffff85|     BASE->z (x=0 y=0)   
    ft_printf("(x-08) personal ft_printf |%%-x|   :   |%-x|     BASE->z (x=0 y=0)\n", hex2);                   //|ffffff85|     BASE->z (x=0 y=0)   
    printf("(x-09) original printf	  |%%#x|   :   |%#x|   BASE->z (x=0 y=0)\n", hex2);                        //|0xffffff85|   BASE->z (x=0 y=0)   
    ft_printf("(x-09) personal ft_printf |%%#x|   :   |%#x|   BASE->z (x=0 y=0)\n", hex2);                     //|0xffffff85|   BASE->z (x=0 y=0)   
    printf("********************************************************************\n");                       //*********************************  
    printf("(x-11) original printf	  |%%1x|   :   |%1x|           BASE->z (0<x<=z y=0)\n", hex);              //|7b|           BASE->z (0<x<=z y=0)
    ft_printf("(x-11) personal ft_printf |%%1x|   :   |%1x|           BASE->z (0<x<=z y=0)\n", hex);           //|7b|           BASE->z (0<x<=z y=0)
    printf("(x-12) original printf	  |%%01x|  :   |%01x|           BASE->z (0<x<=z y=0)\n", hex);             //|7b|           BASE->z (0<x<=z y=0)
    ft_printf("(x-12) personal ft_printf |%%01x|  :   |%01x|           BASE->z (0<x<=z y=0)\n", hex);          //|7b|           BASE->z (0<x<=z y=0)
    printf("(x-13) original printf	  |%%-1x|  :   |%-1x|           BASE->z (0<x<=z y=0)\n", hex);             //|7b|           BASE->z (0<x<=z y=0)
    ft_printf("(x-13) personal ft_printf |%%-1x|  :   |%-1x|           BASE->z (0<x<=z y=0)\n", hex);          //|7b|           BASE->z (0<x<=z y=0)
    printf("(x-14) original printf	  |%%#1x|  :   |%#1x|         BASE->z (0<x<=z y=0)\n", hex);               //|0x7b|         BASE->z (0<x<=z y=0)
    ft_printf("(x-14) personal ft_printf |%%#1x|  :   |%#1x|         BASE->z (0<x<=z y=0)\n", hex);            //|0x7b|         BASE->z (0<x<=z y=0)
    printf("(x-15) original printf	  |%%#-1x| :   |%#-1x|         BASE->z (0<x<=z y=0)\n", hex);              //|0x7b|         BASE->z (0<x<=z y=0)
    ft_printf("(x-15) personal ft_printf |%%#-1x| :   |%#-1x|         BASE->z (0<x<=z y=0)\n", hex);           //|0x7b|         BASE->z (0<x<=z y=0)
    printf("(x-16) original printf	  |%%1x|   :   |%1x|     BASE->z (0<x<=z y=0)\n", hex2);                   //|ffffff85|     BASE->z (0<x<=z y=0)
    ft_printf("(x-16) personal ft_printf |%%1x|   :   |%1x|     BASE->z (0<x<=z y=0)\n", hex2);                //|ffffff85|     BASE->z (0<x<=z y=0)
    printf("(x-17) original printf	  |%%01x|  :   |%01x|     BASE->z (0<x<=z y=0)\n", hex2);                  //|ffffff85|     BASE->z (0<x<=z y=0)
    ft_printf("(x-17) personal ft_printf |%%01x|  :   |%01x|     BASE->z (0<x<=z y=0)\n", hex2);               //|ffffff85|     BASE->z (0<x<=z y=0)
    printf("(x-18) original printf	  |%%-1x|  :   |%-1x|     BASE->z (0<x<=z y=0)\n", hex2);                  //|ffffff85|     BASE->z (0<x<=z y=0)
    ft_printf("(x-18) personal ft_printf |%%-1x|  :   |%-1x|     BASE->z (0<x<=z y=0)\n", hex2);               //|ffffff85|     BASE->z (0<x<=z y=0)
    printf("(x-19) original printf	  |%%#1x|  :   |%#1x|   BASE->z (0<x<=z y=0)\n", hex2);                    //|0xffffff85|   BASE->z (0<x<=z y=0)
    ft_printf("(x-19) personal ft_printf |%%#1x|  :   |%#1x|   BASE->z (0<x<=z y=0)\n", hex2);                 //|0xffffff85|   BASE->z (0<x<=z y=0)
    printf("(x-20) original printf	  |%%#-1x| :   |%#-1x|   BASE->z (0<x<=z y=0)\n", hex2);                   //|0xffffff85|   BASE->z (0<x<=z y=0)
    ft_printf("(x-20) personal ft_printf |%%#-1x| :   |%#-1x|   BASE->z (0<x<=z y=0)\n", hex2);                //|0xffffff85|   BASE->z (0<x<=z y=0)
    printf("********************************************************************\n");                       //*********************************  
    printf("(x-21) original printf	  |%%.1x|  :   |%.1x|           BASE->z (x=0 0<y<=z)\n", hex);             //|7b|           BASE->z (x=0 0<y<=z)
    ft_printf("(x-21) personal ft_printf |%%.1x|  :   |%.1x|           BASE->z (x=0 0<y<=z)\n", hex);          //|7b|           BASE->z (x=0 0<y<=z)
    printf("(x-22) original printf	  |%%-.1x| :   |%-.1x|           BASE->z (x=0 0<y<=z)\n", hex);            //|7b|           BASE->z (x=0 0<y<=z)
    ft_printf("(x-22) personal ft_printf |%%-.1x| :   |%-.1x|           BASE->z (x=0 0<y<=z)\n", hex);         //|7b|           BASE->z (x=0 0<y<=z)
    printf("(x-23) original printf	  |%%#.1x| :   |%#.1x|         BASE->z (x=0 0<y<=z)\n", hex);              //|0x7b|         BASE->z (x=0 0<y<=z)
    ft_printf("(x-23) personal ft_printf |%%#.1x| :   |%#.1x|         BASE->z (x=0 0<y<=z)\n", hex);           //|0x7b|         BASE->z (x=0 0<y<=z)
    printf("(x-24) original printf	  |%%#-.1x|:   |%#-.1x|         BASE->z (x=0 0<y<=z)\n", hex);             //|0x7b|         BASE->z (x=0 0<y<=z)
    ft_printf("(x-24) personal ft_printf |%%#-.1x|:   |%#-.1x|         BASE->z (x=0 0<y<=z)\n", hex);          //|0x7b|         BASE->z (x=0 0<y<=z)
    printf("(x-25) original printf	  |%%.1x|  :   |%.1x|     BASE->z (x=0 0<y<=z)\n", hex2);                  //|ffffff85|     BASE->z (x=0 0<y<=z)
    ft_printf("(x-25) personal ft_printf |%%.1x|  :   |%.1x|     BASE->z (x=0 0<y<=z)\n", hex2);               //|ffffff85|     BASE->z (x=0 0<y<=z)
    printf("(x-26) original printf	  |%%-.1x| :   |%-.1x|     BASE->z (x=0 0<y<=z)\n", hex2);                 //|ffffff85|     BASE->z (x=0 0<y<=z)
    ft_printf("(x-26) personal ft_printf |%%-.1x| :   |%-.1x|     BASE->z (x=0 0<y<=z)\n", hex2);              //|ffffff85|     BASE->z (x=0 0<y<=z)   
    printf("(x-27) original printf	  |%%#.1x| :   |%#.1x|   BASE->z (x=0 0<y<=z)\n", hex2);                   //|0xffffff85|   BASE->z (x=0 0<y<=z)   
    ft_printf("(x-27) personal ft_printf |%%#.1x| :   |%#.1x|   BASE->z (x=0 0<y<=z)\n", hex2);                //|0xffffff85|   BASE->z (x=0 0<y<=z)   
    printf("(x-28) original printf	  |%%#-.1x|:   |%#-.1x|   BASE->z (x=0 0<y<=z)\n", hex2);                  //|0xffffff85|   BASE->z (x=0 0<y<=z)   
    ft_printf("(x-28) personal ft_printf |%%#-.1x|:   |%#-.1x|   BASE->z (x=0 0<y<=z)\n", hex2);               //|0xffffff85|   BASE->z (x=0 0<y<=z)   
    printf("*******************************************************************\n");                        //********************************      
    printf("(x-29) original printf	  |%%2.2x|  :  |%2.2x|           BASE->z (0<x<=z 0<y<=z)\n", hex);         //|7b|           BASE->z (0<x<=z 0<y<=z)
    ft_printf("(x-29) personal ft_printf |%%2.2x|  :  |%2.2x|           BASE->z (0<x<=z 0<y<=z)\n", hex);      //|7b|           BASE->z (0<x<=z 0<y<=z)
    printf("(x-30) original printf	  |%%-2.2x| :  |%-2.2x|           BASE->z (0<x<=z 0<y<=z)\n", hex);        //|7b|           BASE->z (0<x<=z 0<y<=z)
    ft_printf("(x-30) personal ft_printf |%%-2.2x| :  |%-2.2x|           BASE->z (0<x<=z 0<y<=z)\n", hex);     //|7b|           BASE->z (0<x<=z 0<y<=z)
    printf("(x-31) original printf	  |%%#2.2x| :  |%#2.2x|         BASE->z (0<x<=z 0<y<=z)\n", hex);          //|0x7b|         BASE->z (0<x<=z 0<y<=z)
    ft_printf("(x-31) personal ft_printf |%%#2.2x| :  |%#2.2x|         BASE->z (0<x<=z 0<y<=z)\n", hex);       //|0x7b|         BASE->z (0<x<=z 0<y<=z)
    printf("(x-32) original printf	  |%%#-2.2x|:  |%#-2.2x|         BASE->z (0<x<=z 0<y<=z)\n", hex);         //|0x7b|         BASE->z (0<x<=z 0<y<=z)
    ft_printf("(x-32) personal ft_printf |%%#-2.2x|:  |%#-2.2x|         BASE->z (0<x<=z 0<y<=z)\n", hex);      //|0x7b|         BASE->z (0<x<=z 0<y<=z)
    printf("(x-33) original printf	  |%%2.2x|  :  |%2.2x|     BASE->z (0<x<=z 0<y<=z)\n", hex2);              //|ffffff85|     BASE->z (0<x<=z 0<y<=z)
    ft_printf("(x-33) personal ft_printf |%%2.2x|  :  |%2.2x|     BASE->z (0<x<=z 0<y<=z)\n", hex2);           //|ffffff85|     BASE->z (0<x<=z 0<y<=z)
    printf("(x-34) original printf	  |%%-2.2x| :  |%-2.2x|     BASE->z (0<x<=z 0<y<=z)\n", hex2);             //|ffffff85|     BASE->z (0<x<=z 0<y<=z)
    ft_printf("(x-34) personal ft_printf |%%-2.2x| :  |%-2.2x|     BASE->z (0<x<=z 0<y<=z)\n", hex2);          //|ffffff85|     BASE->z (0<x<=z 0<y<=z)
    printf("(x-35) original printf	  |%%#2.2x| :  |%#2.2x|   BASE->z (0<x<=z 0<y<=z)\n", hex2);               //|0xffffff85|   BASE->z (0<x<=z 0<y<=z)
    ft_printf("(x-35) personal ft_printf |%%#2.2x| :  |%#2.2x|   BASE->z (0<x<=z 0<y<=z)\n", hex2);            //|0xffffff85|   BASE->z (0<x<=z 0<y<=z)
    printf("(x-36) original printf	  |%%#-2.2x|:  |%#-2.2x|   BASE->z (0<x<=z 0<y<=z)\n", hex2);              //|0xffffff85|   BASE->z (0<x<=z 0<y<=z)
    ft_printf("(x-36) personal ft_printf |%%#-2.2x|:  |%#-2.2x|   BASE->z (0<x<=z 0<y<=z)\n", hex2);           //|0xffffff85|   BASE->z (0<x<=z 0<y<=z)
	printf("********************************************************************\n");                       //
	printf("\n");                                                                                           //
	printf("*************************(x<=y z<y)*********************************\n");                       //
    printf("(x-37) original printf	  |%%.15x|  :  |%.15x|   BASE->y (x=0 z<y)\n", hex);                       //|00000000000007b|   BASE->y (x=0 z<y) 
    ft_printf("(x-37) personal ft_printf |%%.15x|  :  |%.15x|   BASE->y (x=0 z<y)\n", hex);                    //|00000000000007b|   BASE->y (x=0 z<y) 
    printf("(x-38) original printf	  |%%-.15x| :  |%-.15x|   BASE->y (x=0 z<y)\n", hex);                      //|00000000000007b|   BASE->y (x=0 z<y) 
    ft_printf("(x-38) personal ft_printf |%%-.15x| :  |%-.15x|   BASE->y (x=0 z<y)\n", hex);                   //|00000000000007b|   BASE->y (x=0 z<y) 
    printf("(x-39) original printf	  |%%#.15x| :  |%#.15x| BASE->y (x=0 z<y)\n", hex);                        //|0x00000000000007b| BASE->y (x=0 z<y) 
    ft_printf("(x-39) personal ft_printf |%%#.15x| :  |%#.15x| BASE->y (x=0 z<y)\n", hex);                     //|0x00000000000007b| BASE->y (x=0 z<y)
    printf("(x-40) original printf	  |%%#-.15x|:  |%#-.15x| BASE->y (x=0 z<y)\n", hex);                       //|0x00000000000007b| BASE->y (x=0 z<y)
    ft_printf("(x-40) personal ft_printf |%%#-.15x|:  |%#-.15x| BASE->y (x=0 z<y)\n", hex);                    //|0x00000000000007b| BASE->y (x=0 z<y)
    printf("(x-41) original printf	  |%%.15x|  :  |%.15x|   BASE->y (x=0 z<y)\n", hex2);                      //|0000000ffffff85|   BASE->y (x=0 z<y)
    ft_printf("(x-41) personal ft_printf |%%.15x|  :  |%.15x|   BASE->y (x=0 z<y)\n", hex2);                   //|0000000ffffff85|   BASE->y (x=0 z<y)
    printf("(x-42) original printf	  |%%-.15x| :  |%-.15x|   BASE->y (x=0 z<y)\n", hex2);                     //|0000000ffffff85|   BASE->y (x=0 z<y)
    ft_printf("(x-42) personal ft_printf |%%-.15x| :  |%-.15x|   BASE->y (x=0 z<y)\n", hex2);                  //|0000000ffffff85|   BASE->y (x=0 z<y)
    printf("(x-43) original printf	  |%%#.15x| :  |%#.15x| BASE->y (x=0 z<y)\n", hex2);                       //|0x0000000ffffff85| BASE->y (x=0 z<y)
    ft_printf("(x-43) personal ft_printf |%%#.15x| :  |%#.15x| BASE->y (x=0 z<y)\n", hex2);                    //|0x0000000ffffff85| BASE->y (x=0 z<y)
    printf("(x-44) original printf	  |%%#-.15x|:  |%#-.15x| BASE->y (x=0 z<y)\n", hex2);                      //|0x0000000ffffff85| BASE->y (x=0 z<y)
    ft_printf("(x-44) personal ft_printf |%%#-.15x|:  |%#-.15x| BASE->y (x=0 z<y)\n", hex2);                   //|0x0000000ffffff85| BASE->y (x=0 z<y)
    printf("********************************************************************\n");                       //*********************************
    printf("(x-45) original printf	  |%%15.15x|  :|%15.15x|   BASE->z (0<x<=y z<y)\n", hex);                  //|00000000000007b|   BASE->z (0<x<=y z<y)
    ft_printf("(x-45) personal ft_printf |%%15.15x|  :|%15.15x|   BASE->z (0<x<=y z<y)\n", hex);               //|00000000000007b|   BASE->z (0<x<=y z<y)
    printf("(x-46) original printf	  |%%-15.15x| :|%-15.15x|   BASE->z (0<x<=y z<y)\n", hex);                 //|00000000000007b|   BASE->z (0<x<=y z<y)
    ft_printf("(x-46) personal ft_printf |%%-15.15x| :|%-15.15x|   BASE->z (0<x<=y z<y)\n", hex);              //|00000000000007b|   BASE->z (0<x<=y z<y)
    printf("(x-47) original printf	  |%%#15.15x| :|%#15.15x| BASE->z (0<x<=y z<y)\n", hex);                   //|0x00000000000007b| BASE->z (0<x<=y z<y)
    ft_printf("(x-47) personal ft_printf |%%#15.15x| :|%#15.15x| BASE->z (0<x<=y z<y)\n", hex);                //|0x00000000000007b| BASE->z (0<x<=y z<y)
    printf("(x-48) original printf	  |%%#-15.15x|:|%#-15.15x| BASE->z (0<x<=y z<y)\n", hex);                  //|0x00000000000007b| BASE->z (0<x<=y z<y)
    ft_printf("(x-48) personal ft_printf |%%#-15.15x|:|%#-15.15x| BASE->z (0<x<=y z<y)\n", hex);               //|0x00000000000007b| BASE->z (0<x<=y z<y)
    printf("(x-49) original printf	  |%%15.15x|  :|%15.15x|   BASE->z (0<x<=y z<y)\n", hex2);                 //|0000000ffffff85|   BASE->z (0<x<=y z<y)
    ft_printf("(x-49) personal ft_printf |%%15.15x|  :|%15.15x|   BASE->z (0<x<=y z<y)\n", hex2);              //|0000000ffffff85|   BASE->z (0<x<=y z<y)
    printf("(x-50) original printf	  |%%-15.15x| :|%-15.15x|   BASE->z (0<x<=y z<y)\n", hex2);                //|0000000ffffff85|   BASE->z (0<x<=y z<y)
    ft_printf("(x-50) personal ft_printf |%%-15.15x| :|%-15.15x|   BASE->z (0<x<=y z<y)\n", hex2);             //|0000000ffffff85|   BASE->z (0<x<=y z<y)
    printf("(x-51) original printf	  |%%#15.15x| :|%#15.15x| BASE->z (0<x<=y z<y)\n", hex2);                  //|0x0000000ffffff85| BASE->z (0<x<=y z<y)
    ft_printf("(x-51) personal ft_printf |%%#15.15x| :|%#15.15x| BASE->z (0<x<=y z<y)\n", hex2);               //|0x0000000ffffff85| BASE->z (0<x<=y z<y)
    printf("(x-52) original printf	  |%%#-15.15x|:|%#-15.15x| BASE->z (0<x<=y z<y)\n", hex2);                 //|0x0000000ffffff85| BASE->z (0<x<=y z<y)
    ft_printf("(x-52) personal ft_printf |%%#-15.15x|:|%#-15.15x| BASE->z (0<x<=y z<y)\n", hex2);              //|0x0000000ffffff85| BASE->z (0<x<=y z<y)
	printf("********************************************************************\n");                       //
	printf("\n");																				            //
	printf("*************************(x > z >= y)*******************************\n");                       //
    printf("(x-53) original printf	  |%%15x|   :  |%15x|   BASE->x (x>z y=0)\n", hex);                        //|             7b|   BASE->x (x>z y=0)
    ft_printf("(x-53) personal ft_printf |%%15x|   :  |%15x|   BASE->x (x>z y=0)\n", hex);                     //|             7b|   BASE->x (x>z y=0)
    printf("(x-54) original printf	  |%%015x|  :  |%015x|   BASE->x (x>z y=0)\n", hex);                       //|00000000000007b|   BASE->x (x>z y=0)
    ft_printf("(x-54) personal ft_printf |%%015x|  :  |%015x|   BASE->x (x>z y=0)\n", hex);                    //|00000000000007b|   BASE->x (x>z y=0)
    printf("(x-55) original printf	  |%%#15x|  :  |%#15x|   BASE->x (x>z y=0)\n", hex);                       //|           0x7b|   BASE->x (x>z y=0)
    ft_printf("(x-55) personal ft_printf |%%#15x|  :  |%#15x|   BASE->x (x>z y=0)\n", hex);                    //|           0x7b|   BASE->x (x>z y=0)
    printf("(x-56) original printf	  |%%#015x| :  |%#015x|   BASE->x (x>z y=0)\n", hex);                      //|0x000000000007b|   BASE->x (x>z y=0)
    ft_printf("(x-56) personal ft_printf |%%#015x| :  |%#015x|   BASE->x (x>z y=0)\n", hex);                   //|0x000000000007b|   BASE->x (x>z y=0)
    printf("(x-57) original printf	  |%%-15x|  :  |%-15x|   BASE->x (x>z y=0)\n", hex);                       //|7b             |   BASE->x (x>z y=0)
    ft_printf("(x-57) personal ft_printf |%%-15x|  :  |%-15x|   BASE->x (x>z y=0)\n", hex);                    //|7b             |   BASE->x (x>z y=0)
    printf("(x-58) original printf	  |%%#-15x| :  |%#-15x|   BASE->x (x>z y=0)\n", hex);                      //|0x7b           |   BASE->x (x>z y=0)
    ft_printf("(x-58) personal ft_printf |%%#-15x| :  |%#-15x|   BASE->x (x>z y=0)\n", hex);                   //|0x7b           |   BASE->x (x>z y=0)
    printf("(x-59) original printf	  |%%15x|   :  |%15x|   BASE->x (x>z y=0)\n", hex2);                       //|       ffffff85|   BASE->x (x>z y=0)
    ft_printf("(x-59) personal ft_printf |%%15x|   :  |%15x|   BASE->x (x>z y=0)\n", hex2);                    //|       ffffff85|   BASE->x (x>z y=0)
    printf("(x-60) original printf	  |%%015x|  :  |%015x|   BASE->x (x>z y=0)\n", hex2);                      //|0000000ffffff85|   BASE->x (x>z y=0)
    ft_printf("(x-60) personal ft_printf |%%015x|  :  |%015x|   BASE->x (x>z y=0)\n", hex2);                   //|0000000ffffff85|   BASE->x (x>z y=0)
    printf("(x-61) original printf	  |%%#15x|  :  |%#15x|   BASE->x (x>z y=0)\n", hex2);                      //|     0xffffff85|   BASE->x (x>z y=0)
    ft_printf("(x-61) personal ft_printf |%%#15x|  :  |%#15x|   BASE->x (x>z y=0)\n", hex2);                   //|     0xffffff85|   BASE->x (x>z y=0)
    printf("(x-62) original printf	  |%%#015x| :  |%#015x|   BASE->x (x>z y=0)\n", hex2);                     //|0x00000ffffff85|   BASE->x (x>z y=0)
    ft_printf("(x-62) personal ft_printf |%%#015x| :  |%#015x|   BASE->x (x>z y=0)\n", hex2);                  //|0x00000ffffff85|   BASE->x (x>z y=0)
    printf("(x-63) original printf	  |%%-15x|  :  |%-15x|   BASE->x (x>z y=0)\n", hex2);                      //|ffffff85       |   BASE->x (x>z y=0)
    ft_printf("(x-63) personal ft_printf |%%-15x|  :  |%-15x|   BASE->x (x>z y=0)\n", hex2);                   //|ffffff85       |   BASE->x (x>z y=0)
    printf("(x-64) original printf	  |%%#-15x| :  |%#-15x|   BASE->x (x>z y=0)\n", hex2);                     //|0xffffff85     |   BASE->x (x>z y=0)
    ft_printf("(x-64) personal ft_printf |%%#-15x| :  |%#-15x|   BASE->x (x>z y=0)\n", hex2);                  //|0xffffff85     |   BASE->x (x>z y=0)
    printf("*********************************************************************\n");                      //********************************
    printf("(x-65) original printf	  |%%15.5x|   :  |%15.5x|   BASE->x (x>z y<=z)\n", hex);                   //|          0007b|   BASE->x (x>z y<=z)
    ft_printf("(x-65) personal ft_printf |%%15.5x|   :  |%15.5x|   BASE->x (x>z y<=z)\n", hex);                //|          0007b|   BASE->x (x>z y<=z)
    printf("(x-66) original printf	  |%%#15.5x|  :  |%#15.5x|   BASE->x (x>z y<=z)\n", hex);                  //|        0x0007b|   BASE->x (x>z y<=z)
    ft_printf("(x-66) personal ft_printf |%%#15.5x|  :  |%#15.5x|   BASE->x (x>z y<=z)\n", hex);               //|        0x0007b|   BASE->x (x>z y<=z)
    printf("(x-67) original printf	  |%%-15.5x|  :  |%-15.5x|   BASE->x (x>z y<=z)\n", hex);                  //|0007b          |   BASE->x (x>z y<=z)
    ft_printf("(x-67) personal ft_printf |%%-15.5x|  :  |%-15.5x|   BASE->x (x>z y<=z)\n", hex);               //|0007b          |   BASE->x (x>z y<=z)
    printf("(x-68) original printf	  |%%#-15.5x| :  |%#-15.5x|   BASE->x (x>z y<=z)\n", hex);                 //|0x0007b        |   BASE->x (x>z y<=z)
    ft_printf("(x-68) personal ft_printf |%%#-15.5x| :  |%#-15.5x|   BASE->x (x>z y<=z)\n", hex);              //|0x0007b        |   BASE->x (x>z y<=z)
    printf("(x-69) original printf	  |%%15.5x|   :  |%15.5x|   BASE->x (x>z y<=z)\n", hex2);                  //|       ffffff85|   BASE->x (x>z y<=z)
    ft_printf("(x-69) personal ft_printf |%%15.5x|   :  |%15.5x|   BASE->x (x>z y<=z)\n", hex2);               //|       ffffff85|   BASE->x (x>z y<=z)
    printf("(x-70) original printf	  |%%#15.5x|  :  |%#15.5x|   BASE->x (x>z y<=z)\n", hex2);                 //|     0xffffff85|   BASE->x (x>z y<=z)
    ft_printf("(x-70) personal ft_printf |%%#15.5x|  :  |%#15.5x|   BASE->x (x>z y<=z)\n", hex2);              //|     0xffffff85|   BASE->x (x>z y<=z)
    printf("(x-71) original printf	  |%%-15.5x|  :  |%-15.5x|   BASE->x (x>z y<=z)\n", hex2);                 //|ffffff85       |   BASE->x (x>z y<=z)
    ft_printf("(x-71) personal ft_printf |%%-15.5x|  :  |%-15.5x|   BASE->x (x>z y<=z)\n", hex2);              //|ffffff85       |   BASE->x (x>z y<=z)
    printf("(x-72) original printf	  |%%#-15.5x| :  |%#-15.5x|   BASE->x (x>z y<=z)\n", hex2);                //|0xffffff85     |   BASE->x (x>z y<=z)
    ft_printf("(x-72) personal ft_printf |%%#-15.5x| :  |%#-15.5x|   BASE->x (x>z y<=z)\n", hex2);             //|0xffffff85     |   BASE->x (x>z y<=z)
    printf("*********************************************************************\n");                      //
	printf("\n");																				            //
	printf("*************************(x > y > z)*********************************\n");                      //*******************************
    printf("(x-73) original printf	  |%%15.10x|   :  |%15.10x|   BASE->x (x>y y>z)\n", hex);                  //|     000000007b|   BASE->x (x>y y>z)
    ft_printf("(x-73) personal ft_printf |%%15.10x|   :  |%15.10x|   BASE->x (x>y y>z)\n", hex);               //|     000000007b|   BASE->x (x>y y>z)
    printf("(x-74) original printf	  |%%#15.10x|  :  |%#15.10x|   BASE->x (x>y y>z)\n", hex);                 //|   0x000000007b|   BASE->x (x>y y>z)
    ft_printf("(x-74) personal ft_printf |%%#15.10x|  :  |%#15.10x|   BASE->x (x>y y>z)\n", hex);              //|   0x000000007b|   BASE->x (x>y y>z)
    printf("(x-75) original printf	  |%%-15.10x|  :  |%-15.10x|   BASE->x (x>y y>z)\n", hex);                 //|000000007b     |   BASE->x (x>y y>z)
    ft_printf("(x-75) personal ft_printf |%%-15.10x|  :  |%-15.10x|   BASE->x (x>y y>z)\n", hex);              //|000000007b     |   BASE->x (x>y y>z)
    printf("(x-76) original printf	  |%%#-15.10x| :  |%#-15.10x|   BASE->x (x>y y>z)\n", hex);                //|0x000000007b   |   BASE->x (x>y y>z)
    ft_printf("(x-76) personal ft_printf |%%#-15.10x| :  |%#-15.10x|   BASE->x (x>y y>z)\n", hex);             //|0x000000007b   |   BASE->x (x>y y>z)
    printf("(x-77) original printf	  |%%15.10x|   :  |%15.10x|   BASE->x (x>y y>z)\n", hex2);                 //|     00ffffff85|   BASE->x (x>y y>z)
    ft_printf("(x-77) personal ft_printf |%%15.10x|   :  |%15.10x|   BASE->x (x>y y>z)\n", hex2);              //|     00ffffff85|   BASE->x (x>y y>z)
    printf("(x-78) original printf	  |%%#15.10x|  :  |%#15.10x|   BASE->x (x>y y>z)\n", hex2);                //|   0x00ffffff85|   BASE->x (x>y y>z)
    ft_printf("(x-78) personal ft_printf |%%#15.10x|  :  |%#15.10x|   BASE->x (x>y y>z)\n", hex2);             //|   0x00ffffff85|   BASE->x (x>y y>z)
    printf("(x-79) original printf	  |%%-15.10x|  :  |%-15.10x|   BASE->x (x>y y>z)\n", hex2);                //|00ffffff85     |   BASE->x (x>y y>z)
    ft_printf("(x-79) personal ft_printf |%%-15.10x|  :  |%-15.10x|   BASE->x (x>y y>z)\n", hex2);             //|00ffffff85     |   BASE->x (x>y y>z)
    printf("(x-80) original printf	  |%%#-15.10x| :  |%#-15.10x|   BASE->x (x>y y>z)\n", hex2);               //|0x00ffffff85   |   BASE->x (x>y y>z)
    ft_printf("(x-80) personal ft_printf |%%#-15.10x| :  |%#-15.10x|   BASE->x (x>y y>z)\n", hex2);            //|0x00ffffff85   |   BASE->x (x>y y>z)
    printf("*********************************************************************\n");
	printf("\n");																				
	printf("*************************(ESPECIAL argv = 0)*************************\n");	
	printf("(d-81) original printf	  %%.x      : |%.x|	        BASE->0 (x=0 y=0 z=0)\n", 0);	
	ft_printf("(d-81) personal ft_printf %%.x      : |%.x|	        BASE->0 (x=0 y=0 z=0)\n", 0);
	printf("(d-82) original printf	  %%3.x     : |%3.x|	BASE->x (x>z y=0 z=0)\n", 0);	
	ft_printf("(d-82) personal ft_printf %%3.x     : |%3.x|	BASE->x (x>z y=0 z=0)\n", 0);
	printf("(d-83) original printf	  %%-.x     : |%-.x|	        BASE->1 (x=0 y=0 z=0)\n", 0);
	ft_printf("(d-83) personal ft_printf %%-.x     : |%-.x|	        BASE->1 (x=0 y=0 z=0)\n", 0);
	printf("(d-84) original printf	  %%-3.x    : |%-3.x|	BASE->x (x>z y=0 z=0)\n", 0);	
	ft_printf("(d-84) personal ft_printf %%-3.x    : |%-3.x|	BASE->x (x>z y=0 z=0)\n", 0);
	printf("*********************************************************************\n");
    printf("\n");
	printf("*************************LONGITUDES**********************************\n");
	printf("%%0#10.0X de es 0: |");
	lon = printf("%0#10.0X", 0);
	printf("| --> Longitud original printf: %d\n", lon);
    ft_printf("%%0#10.0X de es 0: |");
	lon = ft_printf("%0#10.0X", 0);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);

	printf("%%0#10.0X de es 5: |");
	lon = printf("%0#10.0X", 5);
	printf("| --> Longitud original printf: %d\n", lon);
    ft_printf("%%0#10.0X de es 5: |");
	lon = ft_printf("%0#10.0X", 5);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);

	printf("%%0#10.0X de es -1: |");
	lon = printf("%0#10.0X", -1);
	printf("| --> Longitud original printf: %d\n", lon);
    ft_printf("%%0#10.0X de es -1: |");
	lon = ft_printf("%0#10.0X", -1);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);


 
    printf("de es: |");
	lon = printf("%0#10.0X, %0#10.0X, %0#10.0X, %0#10.0X, %0#10.0X, %0#10.0X, %0#10.0X, %0#10.0X, %0#10.0X, %0#10.0X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);
	printf("| --> Longitud original printf: %d\n", lon);
	ft_printf(" de  es: |");
	lon = ft_printf("%0#10.0X, %0#10.0X, %0#10.0X, %0#10.0X, %0#10.0X, %0#10.0X, %0#10.0X, %0#10.0X, %0#10.0X, %0#10.0X", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);
	ft_printf("| --> Longitud personal ft_printf: %d\n", lon);   
	printf("*********************************************************************\n");    
    printf("\n");
	printf("*************************CASOS DE ERROR******************************\n");
	printf("CASO 1): '%% x|'\n");
    printf("ERROR 1): |% x|\n", hex3);
	ft_printf("ERROR 1): |% x|\n", hex3);
	printf("\nCASO 2): '%%+x'\n");
    printf("ERROR 2): |%+x|\n", hex3);
	ft_printf("ERROR 2): |%+x|\n", hex3);
	printf("\nCASO 3): '%%0.x'\n");
    printf("ERROR 3): |%0.x|\n", hex3);
	ft_printf("ERROR 3): |%0.x|\n", hex3);
	printf("\nCASO 4): '%%-015x'\n");
    printf("ERROR 4): |%-015x|\n", hex3);
	ft_printf("ERROR 4): |%-015x|\n", hex3);
	printf("\n");
	printf("*********************************************************************\n");
    return (0);
}