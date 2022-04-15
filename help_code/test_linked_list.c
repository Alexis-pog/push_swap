#include "include/push_swap.h"

// void create_list(t_node *head, char **argv)
// {
//     int i = 1;

//     t_node *temporary = head;

//     while(argv[i])
//     {
//         temporary->value = argv[i++];
//         printf("%s - ", temporary->value);
//         temporary = temporary->next;
//     }
// }

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


t_node *create_new_node(char *value)
{
	t_node *result = (t_node *)malloc(sizeof(t_node));
	if(!result)
		return(NULL);
	result->value = value;
	result->next = NULL;
	result->previous = NULL;
	return result;
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
	t_node *tmp;
	node = lastlist(node);
	printf("\n%s\n", node->value);
	// tmp = node;
	node = node->previous;
	printf("\n%s\n", node->value);
	free(node->next);
	node->next = NULL;
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
	// free(node);
}

void    ft_lstadd_back(t_node **node, t_node *new)
{
	t_node *tmp;
	tmp = *node;
	tmp = lastlist(tmp);
	tmp->next = new;
	new->previous = tmp;
}

void printlist(t_node *head)
{
	t_node *temporary = head;
	while(temporary)
	{
		printf("%s - ", temporary->value);
		temporary = temporary->next;
	}
	printf("\n");
}
void printlistone(t_node *head)
{
	t_node *temporary;
	temporary = head;
	int i = 0;
	printf("%d : %s\n",i++, temporary->value);
	temporary = head->next;
	middle_free(temporary);
	printf("%d : %s\n",i++ ,temporary->value);
	temporary = temporary->next;
	printf("%d : %s\n",i++ ,temporary->value);
	temporary = temporary->next;
	printf("%d : %s\n",i++ ,temporary->value);
	temporary = temporary->next;
	printf("%d : %s\n",i++ ,temporary->value);
	// printf("%d : %s\n",i++ ,temporary->value)
}

/*
t_node *node;
t_node *new;

node = create_new_node("1");
new = create_new_node("2");
node->next = new;
new->previous = node;
*/

/*
 #==============#
 |	operation	|
 #==============#
*/

void swap(t_node *node)
{
	node->swap = node->value;
	node->value = node->next->value;
	node->next->value = node->swap;
}

void rotate(t_node *node)
{
	t_node *tmp;
	tmp = lastlist(node);
	node = firstlist(node);
	node->swap = tmp->value;
	tmp->value = node->value;
	node->value = node->swap;
}

void reverse_rotate(t_node *node)
{
	t_node *tmp;
	tmp = firstlist(node);
	node = lastlist(node);
	node->swap = tmp->value;
	tmp->value = node->value;
	node->value = node->swap;
}


int main(int argc, char **argv)
{
	
	t_node *node;
	t_node *tmp;
	t_node *new;
	if (argc > 1)
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
				if (ft_strncmp(saved,argv[j],ft_strlen(saved)) == 0)
				{
					write(1,"ERROR",5);
					return(0);
				}
				j++;
			}
		printf("%d : %s\n",i,argv[i]);
		i++;
		}
		i = 1;

		node = create_new_node(argv[i++]);
		char *a = "hewwo";
		while(i < argc)
		{
			new = create_new_node(argv[i]);
			ft_lstadd_back(&node,new);
			i++;
		}
		// head->next = tmp->next;
		// tmp = create_new_node("are");
		// tmp = create_new_node("you");
		// tmp = create_new_node(argv[i]);
		// head->next = tmp;
		// printf("\n%d\n",i);
		// create_list(&node, argv);
		printlist(node);
		// printf("%s\n",node->value);
		// tmp = node->next;
		// middle_free(tmp);
		// head_free(node);
		// printf("SA :\n");
		// swap(node);
		// printlist(node);
		// printf("RA :\n");
		// rotate(node);
		// printlist(node);
		// printf("RRA :\n");
		// reverse_rotate(node);
		// printlist(node);
		// printf("\n");
		// tail_free(node);

		printlist(node);
		// printf("%s\n",node->value);
		list_free_all(node);
		// printlistone(node);
	}
	return (0);
}

/*

1  2  3 

head = 1;
value->next = prochain; 

until it reach NULL pointer


tmp = new node;
head = tmp;
tmp = tmp->next


create a node
	||
	\/
store the value into the current node 
	||
	\/
create the next node

*/