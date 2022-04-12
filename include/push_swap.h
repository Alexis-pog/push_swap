#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "linker.h"

typedef struct s_node
{
	int value;
	int swap;
	struct s_node* next;
	struct s_node* previous;
	int index;
} t_node;

typedef struct s_val
{
	int	value;
	int	swap;
	int index;
} t_val;

/*
 #==============#
 |	list funct	|
 #==============#
*/
t_node		*create_new_node(int value);
t_node		*lastlist(t_node *node);
t_node		*firstlist(t_node *node);
t_node		*find_big(t_node *node);
t_node		*find_small(t_node *node);
void		ft_lstadd_back(t_node **node, t_node *new);
void    	ft_lstadd_front(t_node **node, t_node *new);
void		printlist(t_node *head);
void		init_val(t_val *val);
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

/*
 #==============#
 |	 parsing	|
 #==============#
*/
int			is_sort(t_node *node);

#endif

