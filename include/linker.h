#ifndef LINKER_H
# define LINKER_H
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>
# include <unistd.h>

typedef struct s_node
{
	int value;
	int swap;
	int sort_value;
	struct s_node* next;
	struct s_node* head;
} t_node;

typedef struct s_val
{
	int	value;
	int	swap;
	int count;
	int indexb;
} t_val;

#endif