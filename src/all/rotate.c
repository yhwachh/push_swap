/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalbako <ibalbako@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:06:51 by ibalbako          #+#    #+#             */
/*   Updated: 2022/10/03 12:06:55 by ibalbako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ra(t_data *data, int i)
{
	t_stack	*stack;
	t_stack	*new_link;
	t_stack	*tp;

	if (data->stack_a_size > 1)
	{
		stack = data->top_stack_a;
		tp = stack->next;
		new_link = ft_stacknew_index(stack->nb, stack->index);
		if (!new_link)
			exit_free(data);
		ft_stackadd_back(&tp, new_link);
		data->top_stack_a = tp;
		free(stack);
		if (i == 1)
			ft_putstr_fd("ra\n", 1);
	}
}

void	rb(t_data *data, int i)
{
	t_stack	*stack;
	t_stack	*new_link;
	t_stack	*tp;

	if (data->stack_b_size > 1)
	{
		stack = data->top_stack_b;
		tp = stack->next;
		new_link = ft_stacknew_index(stack->nb, stack->index);
		if (!new_link)
			exit_free(data);
		ft_stackadd_back(&tp, new_link);
		data->top_stack_b = tp;
		free(stack);
		if (i == 1)
			ft_putstr_fd("rb\n", 1);
	}
}

void	rr(t_data *data)
{
	ra(data, 0);
	rb(data, 0);
	ft_putstr_fd("rr\n", 1);
}
