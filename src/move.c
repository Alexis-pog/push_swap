/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student@.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:11:01 by acoquele          #+#    #+#             */
/*   Updated: 2022/04/15 16:11:57 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
 #==============#
 |	operation	|
 #==============#
*/

void swap(t_node **node)
{
	t_node *first;
	t_node *firstnext;
	int 	swap;

	first = firstlist(*node);
	firstnext = firstlist(*node);
	printf("%p\n",first);
	printf("%p\n",firstnext);
	firstnext = firstnext->next;
	firstnext->next->previous = first;
	first->next = firstnext->next;
	firstnext->next = first;
	first->previous = firstnext;
	firstnext->previous = NULL;
	swap = firstnext->index;
	firstnext->index = first->index;
	first->index = swap;
	*node = firstlist(*node);
	write(1,"sa\n",3);
}

void rotate(t_node **node)
{
	t_node *first;
	t_node *last;
	int swap;
	first = firstlist(*node);
	last = lastlist(*node);
	
	last->next = first;
	first->next->previous = NULL;
	first->next = NULL;
	first->previous = last;
	
	last = lastlist(*node);
	swap = last->index;
	while (last->previous)
	{
		last->index = last->previous->index;
		last = last->previous;
	}
	last->index = swap;
	*node = firstlist(*node);
	write(1,"ra\n",3);
}

void reverse_rotate(t_node **node)
{
	t_node *first;
	t_node *last;
	
	first = firstlist(*node);
	last = lastlist(*node);
	first->previous = last;
	last->previous->next = NULL;
	last->previous = NULL;
	last->next = first;
	last->index = first->index;
	while (first->next)
	{
		first->index++;
		first = first->next;
	}
	first->index++;
	*node = firstlist(*node);
	write(1,"rra\n",4);
}

void push(t_node **node,t_node **nodeb)
{
	// t_node *anode;
	t_node *tmp;
	
	if (!node)
		return ;
	tmp = firstlist(*nodeb);
	// anode = *node;
	(*nodeb) = (*node);
	// printf("%d\n",(*nodeb)->value);
	if ((*node)->next)
	{
		(*node) = (*node)->next;
		(*node)->previous = NULL;
	}
	else
		(*node) = NULL;
	(*nodeb)->next = tmp;

}