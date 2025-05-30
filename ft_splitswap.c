/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitswap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 10:50:48 by adores            #+#    #+#             */
/*   Updated: 2025/05/27 11:01:19 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_words(char *s, char c)
{
	bool	in_word;
	int		i;
	int		count;

	i = 0;
	count = 0;
	in_word = false;
	while(s[i])
	{
		if(s[i] != c)
		{
			if(in_word == false)
			{
				in_word = true;
				count++;
			}
		}
		else
			in_word	= false;
		i++;
	}
	return (count);
}
