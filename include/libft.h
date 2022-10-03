/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibalbako <ibalbako@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:07:42 by ibalbako          #+#    #+#             */
/*   Updated: 2022/10/03 13:08:32 by ibalbako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				nb;
	int				index;
	struct s_stack	*next;
}				t_stack;

typedef struct s_data
{
	t_stack	*top_stack_a;
	t_stack	*top_stack_b;
	int		stack_a_size;
	int		stack_a_min;
	int		stack_a_max;
	int		stack_b_size;
	int		stack_b_min;
	int		stack_b_max;
}				t_data;

size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
void	ft_putchar_fd(char c, int fd);
int		ft_isspace(char c);
int		ft_atoi(const char *str);
long	ft_atol(const char *str);
void	ft_bzero(void *s, size_t n);
int		ft_isdigit(int c);
void	ft_putstr_fd(char *s, int fd);
char	*ft_substr(char const *s, unsigned int start, size_t len);

void	parse_args(char **argv, t_data *data);
char	**ft_split_spaces(char *s);

t_stack	*ft_stacknew(int nb);
t_stack	*ft_stacknew_index(int nb, int index);
void	ft_stackadd_front(t_stack **astack, t_stack *new);
void	ft_stackadd_back(t_stack **astack, t_stack *new);

void	exit_error(void);
void	free_array(char **str);
void	exit_free(t_data *data);
void	free_stack(t_stack **astack);
void	exit_success(t_data *data);

void	find_max_a(t_data *data);
void	find_min_a(t_data *data);

void	find_index(t_data *data);

void	sa(t_data *data, int i);
void	sb(t_data *data, int i);
void	ss(t_data *data);

void	pa(t_data *data);
void	pb(t_data *data);

void	ra(t_data *data, int i);
void	rb(t_data *data, int i);
void	rr(t_data *data);

void	rra(t_data *data, int i);
void	rrb(t_data *data, int i);
void	rrr(t_data *data);

void	sort(t_data *data);
int		sorted(t_data *data);

void	algo_three(t_data *data);
void	algo_five(t_data *data);

#endif
