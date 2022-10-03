/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalbako <ibalbako@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:11:45 by ibalbako          #+#    #+#             */
/*   Updated: 2022/10/03 13:11:59 by ibalbako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc == 1)
		return (0);
	ft_bzero(&data, sizeof(data));
	parse_args(argv, &data);
	if (data.stack_a_size == 1)
		exit_success(&data);
	sort(&data);
	if (sorted(&data) == EXIT_SUCCESS)
		exit_success(&data);
	else
		exit_free(&data);
	return (0);
}
