/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_val.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student@.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:28:12 by acoquele          #+#    #+#             */
/*   Updated: 2022/04/21 15:36:38 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_node  *find_big(t_node *node)
{
	int cmp;

	cmp = INT_MIN;
	node = firstlist(node);
	while(node->next)
	{
		if (cmp < node->value)
			cmp = node->value;
		node = node->next;
	}
	while(node->previous)
	{
		if (cmp < node->value)
			cmp = node->value;
		node = node->previous;
	}
	while(cmp != node->value && node->next)
		node = node->next;
	return(node);
}

t_node  *find_small(t_node *node)
{
	int cmp;

	cmp = INT_MAX;
	node = firstlist(node);
	while(node->next)
	{
		if (node->value < cmp)
			cmp = node->value;
		node = node->next;
	}
	while(node->previous)
	{
		if (node->value < cmp)
			cmp = node->value;
		node = node->previous;
	}
	while(cmp != node->value && node->next)
		node = node->next;
	return(node);
}

// int is_sort(t_node *node)
// {
// 	while(node->next && node->value < node->next->value)
// 	{
// 		node = node->next;
// 	}
// 	if(node->next != NULL)
// 		return(0);
// 	return(1);
// }

int is_sort(t_node *node)
{
	if (!node || !node->next)
		return (0);
	if (node->value > node->next->value)
		return (1);
	return (is_sort(node->next));
}