/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:57:27 by adores            #+#    #+#             */
/*   Updated: 2025/05/30 14:37:00 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
/* 
typedef struct s_node
{
	int				nb;
	int				current_position;
	int				is_cheapest;
	int				move_cost;
	int				best_friend_index;
	int				best_friend_nb;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_stacks_state
{
    t_list  *a;
    t_list  *b;
}   t_stacks_state */

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}   t_stack;


//Handle errors

//Stack initiation

//Nodes initiation

//Stack utils

//Commands
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack	**a);
void	rb(t_stack	**b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack	**a);
void	rrb(t_stack	**b);
void	rrr(t_stack **a, t_stack **b);
//Algorithms

#endif
