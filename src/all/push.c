/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalbako <ibalbako@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:06:10 by ibalbako          #+#    #+#             */
/*   Updated: 2022/10/03 12:06:12 by ibalbako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	pa(t_data *data)
{
	t_stack	*stack_b;
	t_stack	*tp;
	t_stack	*stack_a;

	if (data->stack_b_size > 0)
	{
		stack_b = data->top_stack_b;
		if (stack_b->next)
			tp = stack_b->next;
		else
			tp = NULL;
		stack_a = ft_stacknew_index(stack_b->nb, stack_b->index);
		if (!stack_a)
			exit_free(data);
		ft_stackadd_front(&data->top_stack_a, stack_a);
		free(stack_b);
		data->top_stack_b = tp;
		data->stack_a_size++;
		data->stack_b_size--;
		find_max_a(data);
		find_min_a(data);
		ft_putstr_fd("pa\n", 1);
	}
}

void	pb(t_data *data)
{
	t_stack	*stack_a;
	t_stack	*tp;
	t_stack	*stack_b;

	if (data->stack_a_size > 0)
	{
		stack_a = data->top_stack_a;
		if (stack_a->next)
			tp = stack_a->next;
		else
			tp = NULL;
		stack_b = ft_stacknew_index(stack_a->nb, stack_a->index);
		if (!stack_b)
			exit_free(data);
		ft_stackadd_front(&data->top_stack_b, stack_b);
		free(stack_a);
		data->top_stack_a = tp;
		data->stack_a_size--;
		data->stack_b_size++;
		find_max_a(data);
		find_min_a(data);
		ft_putstr_fd("pb\n", 1);
	}
}
