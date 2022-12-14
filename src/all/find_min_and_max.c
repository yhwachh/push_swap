/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_and_max.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalbako <ibalbako@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:05:33 by ibalbako          #+#    #+#             */
/*   Updated: 2022/10/03 12:05:35 by ibalbako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	find_max_a(t_data *data)
{
	t_stack	*stack;

	stack = data->top_stack_a;
	if (stack)
	{
		data->stack_a_max = stack->nb;
		stack = stack->next;
		while (stack)
		{
			if (stack->nb > data->stack_a_max)
					data->stack_a_max = stack->nb;
			stack = stack->next;
		}
	}
}

void	find_min_a(t_data *data)
{
	t_stack	*stack;

	stack = data->top_stack_a;
	data->stack_a_min = stack->nb;
	stack = stack->next;
	while (stack)
	{
		if (stack->nb < data->stack_a_min)
				data->stack_a_min = stack->nb;
		stack = stack->next;
	}
}
