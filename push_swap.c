/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:49:07 by adores            #+#    #+#             */
/*   Updated: 2025/06/16 11:02:41 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int	size;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return(1);
	if(parse_this_pls(argc, argv, &a) == 0)
	{
		assign_this_pls(a, ft_list_size(a));
		size = ft_list_size(a);
		if (size == 2)
			sort_2(&a);
		else if (size == 3)
			sort_3(&a);
		else if (size == 4)
			sort_4(&a, &b);
		else if (size == 5)
			sort_5(&a, &b);
		else
			radix_sort(&a, &b, size);
	}
	free_this_pls(a);
	if (b)
    	free_this_pls(b);
	return(0);
}
