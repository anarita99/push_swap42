/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 10:05:34 by adores            #+#    #+#             */
/*   Updated: 2025/06/03 12:45:16 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_number(const char *str)
{
	int	i;

	i = 0;
	if(!str[i])
		return (0);
	if (str[i] == '+' || str[i] == '-')
		i++;
	while(str[i])
	{
		if(str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
t_stack	*add_node(t_stack *head, int value)
{
	t_stack	*new;
	t_stack	*tmp;

	new = malloc(sizeof(t_stack));
	if(!new)
		return (NULL);
	new->value = value;
	new->next = NULL;
	if(!head)
		return (new);
	tmp = head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (head);
}
int	has_duplicate(t_stack *head)
{
	t_stack	*current;
	t_stack	*check;
	if(!head)
		return(0);
	current = head;
	while(current)
	{
		check = current->next;
		while(check)
		{
			if (current->value == check->value)
				return(1);
			check = check->next;
		}
		current = current->next;
	}
	return(0);
}

static long	ft_atol(const char *str)
{
	long	result;
	long	sign;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	while(str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (sign * result);
}
