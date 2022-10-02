#include "../../include/libft.h"

t_stack	*ft_stacknew(int nb)
{
	t_stack	*tmp;

	tmp = malloc(sizeof(*tmp));
	if (!tmp)
		return (NULL);
	tmp->nb = nb;
	tmp->index = 0;
	tmp->next = NULL;
	return (tmp);
}

t_stack	*ft_stacknew_index(int nb, int index)
{
	t_stack	*tmp;

	tmp = malloc(sizeof(*tmp));
	if (!tmp)
		return (NULL);
	tmp->nb = nb;
	tmp->index = index;
	tmp->next = NULL;
	return (tmp);
}

void	ft_stackadd_front(t_stack **astack, t_stack *new)
{
	if (astack && new)
	{
		new->next = *astack;
		*astack = new;
	}
}

void	ft_stackadd_back(t_stack **astack, t_stack *new)
{
	t_stack	*tmp;

	tmp = *astack;
	if (!tmp)
		*astack = new;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
}
