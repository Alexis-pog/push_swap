/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_val.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: workplace <workplace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:28:12 by acoquele          #+#    #+#             */
/*   Updated: 2022/05/06 12:39:02 by workplace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// t_node  *find_big(t_node *node)
// {
// 	int cmp;

// 	cmp = INT_MIN;
// 	// node = firstlist(node);
// 	while(node->next)
// 	{
// 		if (cmp < node->value)
// 			cmp = node->value;
// 		node = node->next;
// 	}
// 	while(node->previous)
// 	{
// 		if (cmp < node->value)
// 			cmp = node->value;
// 		node = node->previous;
// 	}
// 	while(cmp != node->value && node->next)
// 		node = node->next;
// 	return(node);
// }

int	find_big(t_node **node)
{
	t_node *tmp;
	int cmp;

	cmp = INT_MIN;
	tmp = (*node)->head;
	while(tmp)
	{
		if (cmp < tmp->value)
			cmp = tmp->value;
		tmp = tmp->next;
	}
	return (cmp);
}


int	find_small(t_node **node)
{
	t_node *tmp;
	int cmp;

	cmp = INT_MAX;
	tmp = (*node)->head;
	while(tmp)
	{
		if (cmp > tmp->value)
			cmp = tmp->value;
		tmp = tmp->next;
	}
	return (cmp);
}

int	find_next_small(t_node **node, int saved)
{
	t_node *tmp;
	int new;
	int flags;

	flags = 0;
	new = 0;
	tmp = (*node)->head;
	while(tmp)
	{
		if (saved < tmp->value && flags == 0)
		{
			new = tmp->value;
			flags++;
		}
		else if (saved < tmp->value && tmp->value < new)
			new = tmp->value;
		else if (saved == new)
			tmp = tmp->next;
		tmp = tmp->next;
	}
	return (new);
}

// int	find_next_small_modif(t_node **node, int saved)
// {
// 	t_node *tmp;
// 	int new;
// 	int flags;

// 	flags = 0;
// 	new = 0;
// 	tmp = (*node)->head;
// 	while(tmp)
// 	{
		
// 			tmp = tmp->next;
// 		tmp = tmp->next;
// 	}
// 	return (new);
// }


/*
 do a loop in a loop and then break the cylce once the smalest value as been found 
*/


int	is_sort(t_node *node)
{
	if (!node || !node->next)
		return (0);
	if (node->value > node->next->value)
		return (1);
	return (is_sort(node->next));
}

t_node	*find_node(t_node **node,int value)
{
	t_node *tmp;

	tmp = (*node)->head;
	while(tmp)
	{
		if (tmp->value == value)
			break ;
		tmp = tmp->next;
	}
	return (tmp);
}


void	simple_list(t_node **node, t_val *val)
{
	t_node *tmp;
	int count;
	int i;

	i = 0;
	val->swap = find_small(node);
	count = counting_list(node);
	while(i < count)
	{
		tmp = find_node(node, val->swap);
		tmp->sort_value = i++;
		val->swap = find_next_small(node, val->swap);
	}
}

int	counting_list(t_node **node)
{
	t_node *tmp;
	int count;

	count = 0;
	tmp = (*node)->head;
	while(tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
