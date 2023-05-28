/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carperez <carperez@student.45madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:58:08 by carperez          #+#    #+#             */
/*   Updated: 2023/02/26 15:12:07 by carperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include "../libft/header/libft.h"

typedef struct s_set
{
	va_list	lst_items;
	int		f_zero[2];
	int		f_sign[2];
	int		f_left[2];
	int		f_prefix[2];
	int		f_space[2];
	int		f_dot[2];
	int		l_gap_1[2];
	int		l_gap_2[2];
	int		f_error;
	int		l_arg;
	char	c_type;
}			t_set;

int		ft_printf(char const *sPrint, ...);
void	ft_set_starter(t_set *pSet);
int		ft_set_type(char const cCmp, t_set *pSet);
void	ft_set_capturer_1(char const *sToken, t_set *pSet);
void	ft_set_capturer_2(char const *sToken, t_set *pSet);
void	ft_set_gapfiller(char const *sToken, t_set *pSet);
void	ft_set_validator(char const *sToken, t_set *pSet);
char	ft_toupper_char(char chng, char cFlag);
char	*ft_hexa_prefix(char *sDest, t_set sSet);
char	*ft_itoa_hex(t_set *pSet, int nOri);
char	*ft_itoa_ptr(t_set *pSet, unsigned long long nOri);
char	*ft_itoa_uns(unsigned int nStr);
char	*ft_buffer_creator(size_t nDimension, char cFiller);
void	ft_print_chr(t_set *pSet, int *nPrinted);
char	*ft_print_str(t_set *pSet, int *nPrinted);
char	*ft_print_int(t_set *pSet, int *nPrinted);
char	*ft_print_hex(t_set *pSet, int *nPrinted);
char	*ft_print_ptr(t_set *pSet, int *nPrinted);
char	*ft_print_uns(t_set *pSet, int *nPrinted);
#endif