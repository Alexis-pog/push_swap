/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student@.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:03:24 by acoquele          #+#    #+#             */
/*   Updated: 2022/05/02 16:36:08 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


void small_sort(t_node **node)
{
	t_node *small;
	t_node *big;
	small = find_node(node,find_small(node));
	big = find_node(node,find_big(node));
	if (counting_list(node) == 3)
	{
		if (big->next && !small->next)
			sort_3_2(node);
		else if (big->next == small && small->next)
			sort_3_3(node);
		else if (big->next && small->next == big)
			sort_3_4(node);
		else if (big->next == small && !small->next)
			sort_3_5(node);
		else if (!big->next && small->next == big)
			sort_3_6(node);
	}
}

void sort_3_2(t_node **node)
{
	rotate(node,"RA\n");
	swap(node,"SA\n");
}

void sort_3_3(t_node **node)
{
	rotate(node,"RA\n");
}

void sort_3_4(t_node **node)
{
	swap(node,"SA\n");
	rotate(node,"RA\n");
}

void sort_3_5(t_node **node)
{
	reverse_rotate(node,"RRA\n");
}

void sort_3_6(t_node **node)
{
	swap(node,"SA\n");
}