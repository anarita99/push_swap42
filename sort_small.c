/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:26:42 by adores            #+#    #+#             */
/*   Updated: 2025/06/11 14:57:54 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
