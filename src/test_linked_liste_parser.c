/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_linked_liste_parser.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student@.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:04:32 by acoquele          #+#    #+#             */
/*   Updated: 2022/04/11 14:31:42 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


// void find_big(t_node *node,)
// {
    
// }

// void printlistone(t_node *head)
// {
// 	t_node *temporary;
// 	temporary = head;
// 	int i = 0;
// 	printf("%d : %s\n",i++, temporary->value);
// 	temporary = head->next;
// 	middle_free(temporary);
// 	printf("%d : %s\n",i++ ,temporary->value);
// 	temporary = temporary->next;
// 	printf("%d : %s\n",i++ ,temporary->value);
// 	temporary = temporary->next;
// 	printf("%d : %s\n",i++ ,temporary->value);
// 	temporary = temporary->next;
// 	printf("%d : %s\n",i++ ,temporary->value);
// 	// printf("%d : %s\n",i++ ,temporary->value);
// }


// int main(int argc, char **argv)
// {
	
// 	t_node *node;
// 	// t_node *tmp;
// 	t_node *new;
// 	if (argc > 1)
// 	{
// 		int i = 1;
// 		int j = 1;
// 		char *saved;
// 		while(argv[i])
// 		{
// 			j = i + 1;
// 			saved = argv[i];
// 			while(argv[j])
// 			{
// 				if (ft_strncmp(saved,argv[j],ft_strlen(saved)) == 0)
// 				{
// 					write(1,"ERROR",5);
// 					return(0);
// 				}
// 				j++;
// 			}
// 		// printf("%d : %s\n",i,argv[i]);
// 		i++;
// 		}
// 		i = 1;
// 		node = create_new_node(argv[i++]);
		
//         while(i < argc)
// 		{
// 			new = create_new_node(argv[i]);
// 			ft_lstadd_back(&node,new);
// 			i++;
// 		}
// 		printlist(node);
// 		// printf("%s\n",node->value);
// 		// tmp = node->next;
// 		// middle_free(tmp);
// 		// head_free(node);
// 		// printf("SA :\n");
// 		// sa(node);
// 		// printlist(node);
// 		// printf("RA :\n");
// 		// ra(node);
// 		// printlist(node);
// 		// printf("RRA :\n");
// 		// rra(node);
// 		// printlist(node);
// 		// printf("\n");
// 		// tail_free(node);

// 		printlist(node);
// 		// printf("%s\n",node->value);
// 		list_free_all(node);
// 		// printlistone(node);
// 	}
// 	return (0);
// }
