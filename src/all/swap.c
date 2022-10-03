/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalbako <ibalbako@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:07:39 by ibalbako          #+#    #+#             */
/*   Updated: 2022/10/03 12:07:42 by ibalbako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	sa(t_data *data, int i)
{
	t_stack	*stack_fst;
	t_stack	*stack_scd;
	int		tp;
	int		tp_index;

	if (data->stack_a_size > 1)
	{
		stack_fst = data->top_stack_a;
		tp = stack_fst->nb;
		tp_index = stack_fst->index;
		stack_scd = stack_fst->next;
		stack_fst->nb = stack_scd->nb;
		stack_scd->nb = tp;
		stack_scd->index = tp_index;
		if (i == 1)
			ft_putstr_fd("sa\n", 1);
	}
}

void	sb(t_data *data, int i)
{
	t_stack	*stack_fst;
	t_stack	*stack_scd;
	int		tp;
	int		tp_index;

	if (data->stack_b_size > 1)
	{
		stack_fst = data->top_stack_b;
		tp = stack_fst->nb;
		tp_index = stack_fst->index;
		stack_scd = stack_fst->next;
		stack_fst->nb = stack_scd->nb;
		stack_scd->nb = tp;
		stack_scd->index = tp_index;
		if (i == 1)
			ft_putstr_fd("sb\n", 1);
	}
}

void	ss(t_data *data)
{
	sa(data, 0);
	sb(data, 0);
	ft_putstr_fd("ss\n", 1);
}
