/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalbako <ibalbako@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:15:39 by ibalbako          #+#    #+#             */
/*   Updated: 2022/10/03 12:15:41 by ibalbako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

long	ft_atol(const char *str)
{
	long	i;
	long	rt;
	int		testneg;

	i = 0;
	rt = 0;
	testneg = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			testneg = 1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		rt = ((rt * 10) + str[i]) - '0';
		i++;
	}
	if (testneg == 1)
		rt = rt * -1;
	return (rt);
}
