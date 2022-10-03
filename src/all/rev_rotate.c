/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalbako <ibalbako@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:06:43 by ibalbako          #+#    #+#             */
/*   Updated: 2022/10/03 12:06:44 by ibalbako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	rra(t_data *data, int i)
{
	t_stack	*last_node;
	t_stack	*new_link;
	t_stack	*tmp;

	if (data->stack_a_size > 1)
	{
		last_node = data->top_stack_a;
		while (last_node->next)
		{
			tmp = last_node;
			last_node = last_node->next;
			if (!last_node->next)
				tmp->next = NULL;
		}
		new_link = ft_stacknew_index(last_node->nb, last_node->index);
		if (!new_link)
			exit_free(data);
		ft_stackadd_front(&data->top_stack_a, new_link);
		free(last_node);
		data->top_stack_a = new_link;
		if (i == 1)
			ft_putstr_fd("rra\n", 1);
	}
}

void	rrb(t_data *data, int i)
{
	t_stack	*last_node;
	t_stack	*new_link;
	t_stack	*tmp;

	if (data->stack_b_size > 1)
	{
		last_node = data->top_stack_b;
		while (last_node->next)
		{
			tmp = last_node;
			last_node = last_node->next;
			if (!last_node->next)
				tmp->next = NULL;
		}
		new_link = ft_stacknew_index(last_node->nb, last_node->index);
		if (!new_link)
			exit_free(data);
		ft_stackadd_front(&data->top_stack_b, new_link);
		free(last_node);
		data->top_stack_b = new_link;
		if (i == 1)
			ft_putstr_fd("rrb\n", 1);
	}
}

void	rrr(t_data *data)
{
	rra(data, 0);
	rrb(data, 0);
	ft_putstr_fd("rrr\n", 1);
}
