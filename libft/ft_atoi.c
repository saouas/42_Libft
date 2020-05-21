/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saouas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 19:47:05 by saouas            #+#    #+#             */
/*   Updated: 2018/11/07 19:58:07 by saouas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int neg;
	int nbr;

	neg = 0;
	i = 0;
	nbr = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' && (str[i + 1] >= 48 && str[i + 1] <= 57))
	{
		neg = 1;
		i++;
	}
	if (str[i] == '+' && (str[i + 1] >= 48 && str[i + 1] <= 57))
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	if (neg == 1)
		return (nbr * -1);
	else
		return (nbr);
}
