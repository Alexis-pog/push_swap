/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student@.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:03:24 by acoquele          #+#    #+#             */
/*   Updated: 2022/04/22 12:17:51 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
void small_sort(t_node **node)
{
	t_node *small;
	t_node *tmp2;
	t_node *big;
	small = find_small(*node);
	big = find_big(*node);
	tmp2 = lastlist(*node);
	if (tmp2->index == 3)
	{
		if (big->index == 2 && small->index == 1)
			sort_3_2(node);
		else if (big->index == 1 && small->index == 2)
			sort_3_3(node);
		else if (big->index == 1 && small->index == 3)
			sort_3_4(node);
		else if (big->index == 2 && small->index == 3)
			sort_3_5(node);
		else if (big->index == 3 && small->index == 2)
			sort_3_6(node);
	}
}

void sort_3_2(t_node **node)
{
	swap(node);
	rotate(node);
}

void sort_3_3(t_node **node)
{
	rotate(node);
}

void sort_3_4(t_node **node)
{
	swap(node);
	reverse_rotate(node);
}

void sort_3_5(t_node **node)
{
	reverse_rotate(node);
}

void sort_3_6(t_node **node)
{
	swap(node);
}
*/