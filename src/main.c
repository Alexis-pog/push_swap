/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student@.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:31:07 by acoquele          #+#    #+#             */
/*   Updated: 2022/04/14 16:22:56 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int main(int argc, char **argv)
{
	
	t_node *node;
	t_val val;
	t_node *new;
	t_node *newnode;
	if (argc > 3)
	{
		int i = 1;
		int j = 1;
		char *saved;
		while(argv[i])
		{
			j = i + 1;
			saved = argv[i];
			while(argv[j])
			{
				if (ft_strncmp(saved,argv[j],ft_strlen(argv[j])) == 0)
				{
					write(1,"1ERROR",6);
					return(0);
				}
				j++;
			}
		i++;
		}
		init_val(&val);
		i = 1;
		node = create_new_node(ft_atoi(argv[i++]),&val);
        while(i < argc)
		{
			new = create_new_node(ft_atoi(argv[i]),&val);
			ft_lstadd_back(&node,new);
			i++;
		}
		if (is_sort(node) == 0)
			return (0);
		
		// printlist(node);
		// new = find_big(node);
		// printf("big value : %d\n",new->value);
		// new = find_small(node);
		// printf("small value : %d\n",new->value);
		// rotate(&node);
		// printlist(node);
		// reverse_rotate(&node);
		// swap(&node);
		// push(&node,&val,newnode);
		// while(is_sort(node) != 0)
		// {
		// 	if (argc < 6)
		// 		small_sort(&node);
		// }
		newnode = create_new_node(node->value,&val);
		
		printlist(node);
		printlist(newnode);
		// printlist(node2);
		// list_free_all(node2);
		list_free_all(node);
	}
	return (0);
}

/*
 might reuse at some point
	
	node2 = create_new_node(50);
	ft_lstadd_front(&node2,new);
	node2 = create_new_node(50);
	ft_lstadd_front(&node2,new);
	
	printf("atoi test : %d\n",ft_atoi("66"));
	printf("atoi test : %d\n",ft_atoi("66"));
	printf("atoi test : %d\n",atoi(" -66 45-5"));
	printf("atoi test : %d\n",ft_atoi("--"));
	printf("\natoi test : %d\n",atoi("- -66"));

	printf("%d : %s\n",i,argv[i]);
	printf("%s\n",node->value);
	tmp = node->next;
	middle_free(tmp);
	head_free(node);
	printf("SA :\n");
	swap(node);
	printlist(node);
	printf("RA :\n");
	ra(node);
	printlist(node);
	printf("RRA :\n");
	rra(node);
	printlist(node);
	printf("\n");
	tail_free(node);
	printf("%s\n",node->value);
	printlistone(node);

*/