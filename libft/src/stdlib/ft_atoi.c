/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carperez <carperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:03:03 by carperez          #+#    #+#             */
/*   Updated: 2023/04/05 12:48:53 by carperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *sNum)
{
	int	ia;
	int	n_result;
	int	v_sig;

	ia = 0;
	n_result = 0;
	v_sig = 1;
	while ((*(sNum + ia) >= 9 && *(sNum + ia) <= 13) || *(sNum + ia) == 32)
		ia ++;
	if (*(sNum + ia) == '-')
	{
		v_sig *= -1;
		ia ++;
	}
	else if (*(sNum + ia) == '+')
		ia ++;
	while (ft_isdigit(*(sNum + ia)))
	{
		n_result = n_result * 10 + *(sNum + ia) - 48;
		ia ++;
	}
	return (v_sig * n_result);
}
// Convert string number to int number.
