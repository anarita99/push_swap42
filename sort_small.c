/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:26:42 by adores            #+#    #+#             */
/*   Updated: 2025/06/12 15:09:01 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


static int get_min_index_pos(t_stack *a)
{
	int		min;
	int		pos;
	int		min_pos;
	t_stack	*tmp;

	min = a->index;
	pos = 0;
	min_pos = 0;
	tmp = a;
	while(tmp)
	{
		if(tmp->index < min)
		{
			min = tmp->index;
			min_pos = pos;
		}
		tmp = tmp->next;
		pos++;
	}
	return(min_pos);
}

void	sort_2(t_stack **a)
{
	if((*a)->value > (*a)->next->value)
		sa(a);
}

void	sort_3(t_stack **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->value;
	second = (*a)->next->value;
	third = (*a)->next->next->value;
	if (first < second && second < third)
		return ;
	if (first > second && second < third && first < third) // 2 1 3
		sa(a);
	else if(first > second && second > third) // 3 2 1
	{
		sa(a);
		rra(a);
	}
	else if(first > second && second < third && first > third) // 3 1 2
		ra(a);
	else if(first < second && second > third && first < third) // 1 3 2
	{
		sa(a);
		ra(a);
	}
	else if(first < second && second > third && first > third) // 2 3 1
		rra(a);
}

void	sort_4(t_stack **a, t_stack **b)
{
	int min_pos;

	min_pos = get_min_index_pos(*a);
	if (min_pos == 1)
		ra(a);
	else if (min_pos == 2)
	{
		ra(a);
		ra(a);
	}
	else if(min_pos == 3)
		rra(a);
	pb(a, b);
	sort_3(a);
	pa(a, b);
}

void	sort_5(t_stack **a, t_stack **b)
{
	int min_pos;

	min_pos = get_min_index_pos(*a);
	while(min_pos != 0)
	{
		if (min_pos <= 2)
			ra(a);
		else
			rra(a);
		min_pos = get_min_index_pos(*a);
	}
	pb(a , b);
	min_pos = get_min_index_pos(*a);
	while(min_pos != 0)
	{
		if (min_pos <= 2)
			ra(a);
		else
			rra(a);
		min_pos = get_min_index_pos(*a);
	}
	pb(a, b);
	sort_3(a);
	if ((*b)->index < (*b)->next->index)
		sb(b);
	pa(a, b);
	pa(a, b);
}