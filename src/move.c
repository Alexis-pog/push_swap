/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student@.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:11:01 by acoquele          #+#    #+#             */
/*   Updated: 2022/04/11 11:11:21 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
 #==============#
 |	operation	|
 #==============#
*/

void sa(t_node *node)
{
	node->swap = node->value;
	node->value = node->next->value;
	node->next->value = node->swap;
}

void ra(t_node *node)
{
	t_node *tmp;
	tmp = lastlist(node);
	node = firstlist(node);
	node->swap = tmp->value;
	tmp->value = node->value;
	node->value = node->swap;
}

void rra(t_node *node)
{
	t_node *tmp;
	tmp = firstlist(node);
	node = lastlist(node);
	node->swap = tmp->value;
	tmp->value = node->value;
	node->value = node->swap;
}