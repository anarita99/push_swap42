/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 10:05:34 by adores            #+#    #+#             */
/*   Updated: 2025/06/11 15:23:02 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_number(const char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (0);
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	has_duplicate(int num, t_stack *stk)
{
	while (stk)
	{
		if (stk->value == num)
			return (1);
		stk = stk->next;
	}
	return (0);
}

static long	ft_atol(const char *str)
{
	long	result;
	int		sign;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (sign * result);
}

int	parse_this_pls(int argc, char **argv, t_stack **a)
{
	int		i;
	long	num;
	t_stack	*new;

	i = 1;
	while (i < argc)
	{
		if (!is_number(argv[i]))
		{
			write(2, "Error\n", 6);
			return (1);
		}
		num = ft_atol(argv[i]);
		if (num > INT_MAX || num < INT_MIN)
		{
			write(2, "Error\n", 6);
			return (1);
		}
		if (has_duplicate((int)num, *a))
		{
			write(2, "Error\n", 6);
			return (1);
		}
		new = ft_lstnew((int)num);
		if (!new)
			return (1);
		ft_lstadd_back(a, new);
		i++;
	}
	return (0);
}

void	assign_this_pls(t_stack *stk, int stack_size)
{
	int		index;
	t_stack	*ptr;
	t_stack	*min;
	int		min_value;

	index = 0;
	while(index < stack_size)
	{
		ptr = stk;
		min = NULL;
		min_value = INT_MAX;
		while(ptr)
		{
			if(ptr->index == -1 && ptr->value < min_value)
			{
				min_value = ptr->value;
				min = ptr;
			}
			ptr = ptr->next;
		}
		if (min)
			min->index = index;
		index++;
	}
}
