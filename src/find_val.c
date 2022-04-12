/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_val.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student@.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:28:12 by acoquele          #+#    #+#             */
/*   Updated: 2022/04/12 11:57:14 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_node  *find_big(t_node *node)
{
    int cmp;

    cmp = 0;
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
    while(cmp > node->value)
        node = node->next;
    return(node);
}

t_node  *find_small(t_node *node)
{
    int cmp;

    cmp = 0;
    node = firstlist(node);
    while(node->next)
    {
        if (cmp > node->value)
            cmp = node->value;
        node = node->next;
    }
    while(node->previous)
    {
        if (cmp > node->value)
            cmp = node->value;
        node = node->previous;
    }
    while(cmp < node->value && node->next)
        node = node->next;
    return(node);
}