/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalbako <ibalbako@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:05:22 by ibalbako          #+#    #+#             */
/*   Updated: 2022/10/03 12:05:24 by ibalbako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	find_index(t_data *data)
{
	int		i;
	t_stack	*stack;
	t_stack	*stack_cpy;

	stack = data->top_stack_a;
	while (stack)
	{
		i = 0;
		stack_cpy = data->top_stack_a;
		while (stack_cpy)
		{
			if (stack->nb > stack_cpy->nb)
				i++;
			stack_cpy = stack_cpy->next;
		}
		stack->index = i;
		stack = stack->next;
	}
}
