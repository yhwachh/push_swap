/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalbako <ibalbako@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:05:08 by ibalbako          #+#    #+#             */
/*   Updated: 2022/10/03 12:05:14 by ibalbako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	exit_success(t_data *data)
{
	free_stack(&data->top_stack_a);
	free_stack(&data->top_stack_b);
	exit(0);
}

void	exit_free(t_data *data)
{
	free_stack(&data->top_stack_a);
	free_stack(&data->top_stack_b);
	exit_error();
}

void	exit_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(0);
}

void	free_stack(t_stack **astack)
{
	t_stack	*stack;
	t_stack	*tmp;

	if (astack)
	{
		stack = *astack;
		while (stack)
		{
			if (stack->next)
				tmp = stack->next;
			else
				tmp = NULL;
			free(stack);
			stack = tmp;
		}
		*astack = NULL;
	}
}

void	free_array(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	*str = NULL;
	if (str)
		free(str);
}
