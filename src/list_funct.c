/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_funct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student@.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:04:29 by acoquele          #+#    #+#             */
/*   Updated: 2022/04/14 16:27:54 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


t_node *create_new_node(int value, t_val *val)
{
	t_node *result = (t_node *)malloc(sizeof(t_node));
	if(!result)
		return(NULL);
	result->value = value;
	result->next = NULL;
	result->previous = NULL;
	result->index = val->index++;
	return (result);
}

void list_free_all(t_node *node)
{
	int i = 0;
	t_node *tmp;
	node = lastlist(node);
	while(node)
	{
		tmp = node;
		node = node->previous;
		printf("free nbr : %d\n",i++);
		free(tmp);
	}
}

void printlist(t_node *head)
{
	t_node *temporary = head;
	while(temporary)
	{
		printf("%d: %d\n",temporary->index,temporary->value);
		printf("%p\n",temporary);
		temporary = temporary->next;
	}
	printf("\n");
}

void    ft_lstadd_back(t_node **node, t_node *new)
{
	t_node *tmp;
	tmp = *node;
	tmp = lastlist(tmp);
	tmp->next = new;
	new->previous = tmp;
}

void    ft_lstadd_front(t_node **node, t_node *new)
{
	t_node *tmp;
	tmp = *node;
	new->next = tmp;
	new->previous = NULL;
}

void middle_free(t_node *node)
{
	node->previous->next = node->next;
	node->next->previous = node->previous;
	free(node);
}

void head_free(t_node *node)
{
	node = firstlist(node);
	*node = *node->next;
	node->previous = NULL;
}

void tail_free(t_node *node)
{
	node = lastlist(node);
	node = node->previous;
	free(node->next);
	node->next = NULL;
}

t_node *lastlist(t_node *node)
{
	if (!node)
		return (0);
	while(node->next)
	{
		node = node->next;
	}
	return(node);
}

t_node *firstlist(t_node *node)
{
	if (!node)
		return (0);
	while(node->previous)
	{
		node = node->previous;
	}
	return(node);
}

void init_val(t_val *val)
{
	val->index = 1;
	val->indexb = 1;
}
