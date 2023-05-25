/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_03_chrstr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carperez <carperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 12:52:18 by carperez          #+#    #+#             */
/*   Updated: 2023/05/13 12:52:18 by carperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// "ft_print_chr" is the primary function used to process format specifier
// placeholders that correspond to char argument.
char	*ft_print_chr(t_set *pSet, int *nPrinted)
{
	char	*p_buffer;
	char	arg_char;

	p_buffer = NULL;
	if (pSet->c_type != '%')
		arg_char = (char) va_arg(pSet->lst_items, long int);
	else
		arg_char = '%';
	pSet->l_arg = 1;
	if (pSet->l_gap_1[1] > pSet->l_arg)
		pSet->l_arg = pSet->l_gap_1[1];
	p_buffer = ft_buffer_creator(pSet->l_arg, ' ');
	if (p_buffer != NULL)
	{
		if (pSet->f_left[1] != 0 && arg_char != 0)
			p_buffer[0] = arg_char;
		else
			p_buffer[pSet->l_arg - 1] = arg_char;
		*nPrinted += pSet->l_arg;
	}
	return (p_buffer);
}

// "ft_buffer_filler" applies the initial format to the input string argument,
// storing the result into the memory buffer.
static char	*ft_buffer_filler(char *sDest, char const *sOri1, char const *sOri2
		, t_set pSet)
{
	if (sOri1 != NULL)
		ft_memcpy(sDest, sOri1, pSet.l_arg);
	else
	{
		if (pSet.f_left[1])
			ft_memcpy(sDest, sOri2, ft_strlen(sOri2));
		else
			ft_memcpy(sDest + (pSet.l_arg - ft_strlen(sOri2)), sOri2,
				ft_strlen(sOri2));
	}
	return (sDest);
}

// "ft_buffer_sizer" determines the amount of memory allocation needed to store
// the processed input string argument.
static char	*ft_buffer_sizer(char const *sOri1, char const *sOri2, t_set *pSet)
{
	char	*p_new;

	p_new = NULL;
	if (sOri1 != NULL)
	{
		pSet->l_arg = ft_strlen(sOri1);
		if (pSet->f_dot[1])
		{		
			if (pSet->l_arg > pSet->l_gap_2[1])
				pSet->l_arg = pSet->l_gap_2[1];
		}
		p_new = ft_buffer_creator(pSet->l_arg, ' ');
		ft_buffer_filler(p_new, sOri1, NULL, *pSet);
	}
	else
	{
		if (pSet->l_arg < pSet->l_gap_1[1])
			pSet->l_arg = pSet->l_gap_1[1];
		p_new = ft_buffer_creator(pSet->l_arg, ' ');
		if (p_new != NULL)
			ft_buffer_filler(p_new, NULL, sOri2, *pSet);
	}
	return (p_new);
}

// "ft_print_str" is the primary function used to process format specifier
// placeholders that correspond to string argument.
char	*ft_print_str(t_set *pSet, int *nPrinted)
{
	char			*p_buffer;
	char			*p_arg;
	char			*p_aux;

	p_aux = NULL;
	p_buffer = NULL;
	p_arg = va_arg(pSet->lst_items, char *);
	if (p_arg == NULL)
	{
		p_arg = "(null)";
		pSet->l_arg = 6;
	}
	p_aux = ft_buffer_sizer(p_arg, NULL, pSet);
	if (p_aux != NULL)
	{
		p_buffer = ft_buffer_sizer(NULL, p_aux, pSet);
		if (p_buffer != NULL)
			*nPrinted += pSet->l_arg;
		free(p_aux);
	}
	return (p_buffer);
}

// END