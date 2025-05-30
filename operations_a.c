/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:58:40 by adores            #+#    #+#             */
/*   Updated: 2025/05/30 12:18:15 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_nodes(t_stack	**stk)
{
	t_stack	*first;
	t_stack	*second;

	if (!stk || !*stk || !(*stk) -> next)
	first = *stk;
	second = first -> next;
	first->next = second ->next;
	second->next = first;
	*stk = second;
}

void	sa(t_stack **a)
{
	swap_nodes(a);
	write(1, "sa\n", 3);
}

void	sb(t_stack **b)
{
	swap_nodes(b);
	write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b)
{
	swap_nodes(a);
	swap_nodes(b);
	write(1, "ss\n", 3);
}

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	if(!b || !*b)
		return ;
	tmp = (*b)->next;
	(*b)->next = *a;
	*a = *b;
	*b = tmp;
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	if(!a || !*a)
		return ;
	tmp = (*a)->next;
	(*a)->next = *b;
	*b = *a;
	*a = tmp;
	write(1, "pb\n", 3);
}

static void	rotate_nodes(t_stack **stk)
{
	t_stack	*first;
	t_stack	*last;

	if (!stk || !*stk || !(*stk)->next)
		return ;
	first = *stk;
	*stk = first->next;
	last = ft_lstlast(*stk);
	last->next = first;
}

void	ra(t_stack	**a)
{
	rotate_nodes(a);
	write(1, "ra\n", 3);
}

void	rb(t_stack	**b)
{
	rotate_nodes(b);
	write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	rotate_nodes(a);
	rotate_nodes(b);
	write(1, "rr\n", 3);
}