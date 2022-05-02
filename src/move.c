/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student@.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:11:01 by acoquele          #+#    #+#             */
/*   Updated: 2022/05/02 11:09:56 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
 #==============#
 |	operation	|
 #==============#
*/

void swap(t_node **node, char *cmd)
{
	int first;
	int firstnext;
	// int 	swap;
	first = (*node)->head->value;
	firstnext = (*node)->head->next->value;
	(*node)->head->value = firstnext;
	(*node)->head->next->value = first;
	first = (*node)->head->sort_value;
	firstnext = (*node)->head->next->sort_value;
	(*node)->head->value = firstnext;
	(*node)->head->next->value = first;
	write(1,cmd,ft_strlen(cmd));
}

void rotate(t_node **node, char *cmd)
{
	t_node *first;
	t_node *last;
	// int swap;
	first = (*node);
	last = lastlist(*node);
	(*node) = (*node)->next;
	last->next = first;
	first->next = NULL;
	write(1,cmd,ft_strlen(cmd));
}

void reverse_rotate(t_node **node, char *cmd)
{
	t_node *prevlast;
	t_node *first;
	t_node *last;
	
	prevlast = (*node);
	first = (*node);
	last = lastlist(*node);
	while(prevlast->next->next)
		prevlast = prevlast->next;
	last->next = first;
	(*node)->head = last;
	prevlast->next = NULL;
	(*node) = (*node)->head;
	write(1,cmd,ft_strlen(cmd));
}


void push(t_node **stacka,t_node **stackb)
{
	t_node *a;
	t_node *b;
	if(!(*stacka))
		return ;
	a = (*stacka)->head;
	b = (*stackb);
	(*stacka) = (*stacka)->next;
	(*stackb) = a;
	(*stackb)->next = b;
}



// t_node *anode;
// 	t_node *tmp;
	
// 	if (!(*stacka))
// 		return ;
// 	tmp = firstlist(*stackb);
// 	printf("%p\n",stackb);
// 	if ((*stacka))
// 	{
// 		(*stacka) = (*stacka)->next;
// 		(*stacka)->previous = NULL;
// 	}
// 	else
// 		(*stacka) = NULL;
// 	if ((*stackb))
// 	{	
// 		(*stackb) = (*stacka);
// 		(*stackb)->next = tmp;	
// 	}
// 	else
// 	{
// 	// tmp->previous = (*stackb);
// 		// tmp->next = NULL;
// 		(*stackb)->next = tmp;
// 	}
// 	if((*stackb) && !((*stackb)->next))
// 	{
// 		// write(1,"1",1);
// 		(*stackb) = (*stacka);
// 		(*stacka) = (*stacka)->next;
// 		(*stacka)->previous = NULL;
// 		(*stackb)->next = tmp;
// 	}
// 		// write(1,"1",1);
// 	else if((*stackb) && (*stackb)->next)
// 	{
// 		(*stackb) = (*stacka);
// 		(*stacka) = (*stacka)->next;
// 		(*stacka)->previous = NULL;
// 		(*stackb)->next->next = NULL;
// 		(*stackb)->previous = (*stackb); 
// 		(*stackb)->next = tmp;
// 	}
