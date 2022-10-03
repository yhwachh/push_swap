/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalbako <ibalbako@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:07:19 by ibalbako          #+#    #+#             */
/*   Updated: 2022/10/03 12:07:22 by ibalbako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	sorted(t_data *data)
{
	t_stack	*stack;
	int		nb;

	stack = data->top_stack_a;
	while (stack)
	{
		nb = stack->nb;
		stack = stack->next;
		if (stack && nb > stack->nb)
			return (1);
	}
	if (data->top_stack_b)
		return (1);
	return (0);
}
