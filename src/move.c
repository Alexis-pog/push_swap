/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student@.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:11:01 by acoquele          #+#    #+#             */
/*   Updated: 2022/04/21 15:29:02 by acoquele         ###   ########.fr       */
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

	first = (*node)->head;
	firstnext = (*node)->head;
	printf("%p\n",first);
	printf("%p\n",firstnext);
	firstnext = firstnext->next;
	first->next = firstnext->next;
	firstnext->next = first;
	swap = firstnext->index;
	firstnext->index = first->index;
	first->index = swap;
	*node = (*node)->head;
	write(1,"sa\n",3);
}

void rotate(t_node **node)
{
	t_node *first;
	t_node *last;
	int swap;
	first = (*node)->head;
	last = lastlist(*node);
	
	last->next = first;
	first->next = NULL;
	last = lastlist(*node);
	swap = last->index;
	/*
	while (last->previous)
	{
		last->index = last->previous->index;
		last = last->previous;
	}
	last->index = swap;
	*/
	*node = (*node)->head;
	write(1,"ra\n",3);
}

void reverse_rotate(t_node **node)
{
	t_node *prevlast;
	t_node *last;
	
	last = lastlist(*node);
	while ((*node)->next->next)
		(*node) = (*node)->next;
	prevlast = (*node);
	last->next = (*node)->head;
	prevlast->next = NULL;
	*node = (*node)->head;
	write(1,"rra\n",4);
}
/*
void push(t_node **stacka,t_node **stackb)
{
	// t_node *anode;
	t_node *tmp;
	
	if (!(*stacka))
		return ;
	tmp = firstlist(*stackb);
	printf("%p\n",stackb);
	if ((*stacka))
	{
		(*stacka) = (*stacka)->next;
		(*stacka)->previous = NULL;
	}
	else
		(*stacka) = NULL;
	if ((*stackb))
	{	
		(*stackb) = (*stacka);
		(*stackb)->next = tmp;	
	}
	// else
	// {
	// // tmp->previous = (*stackb);
	// 	// tmp->next = NULL;
	// 	(*stackb)->next = tmp;
	// }
	// if((*stackb) && !((*stackb)->next))
	// {
	// 	// write(1,"1",1);
	// 	(*stackb) = (*stacka);
	// 	(*stacka) = (*stacka)->next;
	// 	(*stacka)->previous = NULL;
	// 	(*stackb)->next = tmp;
	// }
	// 	// write(1,"1",1);
	// else if((*stackb) && (*stackb)->next)
	// {
	// 	(*stackb) = (*stacka);
	// 	(*stacka) = (*stacka)->next;
	// 	(*stacka)->previous = NULL;
	// 	(*stackb)->next->next = NULL;
	// 	(*stackb)->previous = (*stackb); 
	// 	(*stackb)->next = tmp;
	// }

}
*/