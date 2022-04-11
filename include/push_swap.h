#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "linker.h"

typedef struct s_node
{
	char *value;
	char *swap;
	struct s_node* next;
	struct s_node* previous;
} t_node;

typedef struct s_val
{
	char *value;
	char *swap;

} t_val;

/*
 #==============#
 |	list funct	|
 #==============#
*/
t_node		*create_new_node(char *value);
t_node		*lastlist(t_node *node);
t_node		*firstlist(t_node *node);
void		ft_lstadd_back(t_node **node, t_node *new);
void		printlist(t_node *head);
/*
	free list funct
*/
void		middle_free(t_node *node);
void		list_free_all(t_node *node);
void		head_free(t_node *node);
void		tail_free(t_node *node);
/*
 #==============#
 |	operation	|
 #==============#
*/
void		sa(t_node *node);
void		ra(t_node *node);
void		rra(t_node *node);



#endif

