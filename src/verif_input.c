#include "../include/push_swap.h"

// typedef struct s_node
// {
//     char *value;
//     struct s_node* next;
//     struct s_node* current;
//     struct s_node* previous;
// } t_node;


// void printlist(t_node *head)
// {
//     t_node *temporary = head;
//     while(temporary)
//     {
//         printf("%s - ", temporary->value);
//         temporary = temporary->next;
//     }
//     printf("\n");
// }

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

// t_node *create_new_node(char *value)
// {
//     t_node *result = malloc(sizeof(t_node));
//     result->value = value;
//     result->next = NULL;
//     return result;
// }

// int main(int argc, char **argv)
// {
    
//     t_node *head;
//     t_node *tmp;

//     int i = 1;
//     while(i <= argc - 1)
//     {    
//         tmp = create_new_node(argv[i]);
//         tmp->next = head;
//         head = tmp;
//         i++;
//     }
//     // create_list(&node, argv);
//     printlist(head);
//     return (0);
// }