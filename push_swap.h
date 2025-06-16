/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:57:27 by adores            #+#    #+#             */
/*   Updated: 2025/06/12 15:23:05 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
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
}					t_node;

typedef struct s_stacks_state
{
	t_list			*a;
	t_list			*b;
}   t_stacks_state */

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}					t_stack;

t_stack				*ft_lstnew(int value);
t_stack				*ft_lstlast(t_stack *lst);
void				ft_lstadd_back(t_stack **lst, t_stack *new);
int					ft_list_size(t_stack *stk);
void				sa(t_stack **a);
void				sb(t_stack **b);
void				ss(t_stack **a, t_stack **b);
void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **a, t_stack **b);
void				ra(t_stack **a);
void				rb(t_stack **b);
void				rr(t_stack **a, t_stack **b);
void				rra(t_stack **a);
void				rrb(t_stack **b);
void				rrr(t_stack **a, t_stack **b);

int					parse_this_pls(int argc, char **argv, t_stack **a);
void				free_this_pls(t_stack *stk);
void				assign_this_pls(t_stack *stk, int stack_size);


void	sort_2(t_stack **a);
void	sort_3(t_stack **a);
void	sort_4(t_stack **a, t_stack **b);
void	sort_5(t_stack **a, t_stack **b);
void	radix_sort(t_stack **a, t_stack **b, int size);

//void print_list(t_stack *stk, char *name);
#endif
