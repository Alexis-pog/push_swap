/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   margulin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student@.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:38:21 by acoquele          #+#    #+#             */
/*   Updated: 2022/05/03 17:10:57 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	radix_sort(t_node **node, t_node **nodeb, int decal)
{
	int	i;
    int count = counting_list(node);

	while (is_sort(*node) != 0 && ++decal < INT_MAX)
	{
		i = -1;
		while (++i < count)
		{
            printlist(*node);
			if (((((*node)->head->sort_value >> decal) & 1) % 2) == 0)
			{
				push(node,nodeb);
				write(1, "pb\n", 3);
			}
			else
			{
				rotate(node, "ra\n");
			}
		}
		while (nodeb && (*nodeb)->head != NULL)
		{
			push(nodeb,node);
			write(1, "pa\n", 3);
		}
	}
	return ;
}