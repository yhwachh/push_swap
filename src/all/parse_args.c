/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalbako <ibalbako@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:05:57 by ibalbako          #+#    #+#             */
/*   Updated: 2022/10/03 12:06:00 by ibalbako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	check_duplicate(t_stack *stack_a)
{
	int		i;
	int		j;
	t_stack	*stack_tmp;

	while (stack_a)
	{
		i = stack_a->nb;
		stack_tmp = stack_a;
		while (stack_tmp->next)
		{
			stack_tmp = stack_tmp->next;
			j = stack_tmp->nb;
			if (i == j)
				return (1);
		}
		stack_a = stack_a->next;
	}
	return (0);
}

int	check_digit(char **str, t_data *data)
{
	int	i;
	int	j;

	i = 0;
	(void)data;
	if (!str || !str[0])
		return (1);
	while (str[i])
	{
		j = 0;
		if (str[i][j] == '-' || str[i][j] == '+')
		{
			j++;
			if (!str[i][j])
				return (1);
		}
		while (str[i][j])
		{
			if (!ft_isdigit(str[i][j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	into_stack(char **str, t_data *data)
{
	int		i;
	t_stack	*new_link;
	long	nb;

	i = 0;
	(void)data;
	while (str[i])
	{
		nb = ft_atol(str[i]);
		if (nb < -2147483648 || nb > 2147483647)
			return (1);
		new_link = ft_stacknew(ft_atoi(str[i]));
		if (!new_link)
			return (1);
		ft_stackadd_back(&data->top_stack_a, new_link);
		data->stack_a_size++;
		i++;
	}
	return (0);
}

void	parse_args(char **argv, t_data *data)
{
	int		i;
	char	**args;

	i = 1;
	while (argv[i])
	{
		args = ft_split_spaces(argv[i]);
		if (check_digit(args, data) == 1 || into_stack(args, data)
			== 1)
		{
			free_array(args);
			exit_free(data);
		}
		free_array(args);
		i++;
	}
	if (check_duplicate(data->top_stack_a) == 1)
		exit_free(data);
}
