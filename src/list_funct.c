/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_funct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student@.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:04:29 by acoquele          #+#    #+#             */
/*   Updated: 2022/04/21 13:22:10 by acoquele         ###   ########.fr       */
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
	result->index = val->index++;
	return (result);
}

void list_free_all(t_node **node)
{
	int i = 0;
	t_node *tmp;
	tmp = (*node);
	while(tmp)
	{
		free(tmp);
		tmp = tmp->next;
		printf("free nbr : %d\n",i++);
	}
}

void printlist(t_node *head)
{
	int i = 0;
	t_node *temporary = head;
	while(temporary)
	{
		printf("%d: %d counter element %d\n",temporary->index,temporary->value,i++);
		printf("%p\n",temporary);
		temporary = temporary->next;
	}
	printf("\n");
}

void    ft_lstadd_back(t_node **node, t_node *new)
{
	t_node *tmp;
	if (!node || !new)
		return ;
	tmp = *node;
	tmp = lastlist(tmp);
	tmp->next = new;
}

void    ft_lstadd_front(t_node **node, t_node *new)
{
	t_node *tmp;
	if (!node || !new)
		return ;
	tmp = (*node)->head;
	new->next = tmp;
	(*node)->head = new;
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

void find_nbr(t_node *node)
{
	if (!node)
		return ;
		
	while(node->next)
	{
		node = node->next;
	}
}

void init_val(t_val *val)
{
	val->index = 1;
	val->indexb = 1;
}

void populate(t_node **node, char **argv,int argc, t_val *val)
{
	int i;

	i = 1;
	t_node *new;
	*node = create_new_node(ft_atoi(argv[i++]),val);
	(*node)->head = *node;
    while(i < argc)
	{
		new = create_new_node(ft_atoi(argv[i]),val);
		ft_lstadd_back(node,new);
		i++;
	}
}
/*
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
*/