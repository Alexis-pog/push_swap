#include "include/push_swap.h"

void change_value(int a)
{
    a = 5;
}

void change_true(int *a)
{
    *a = 5;
}
int main(int argc, char **argv)
{   
    int i = 1;
    char *saved;
    char *saved2;
    if(argc > 1)
    {
        saved = argv[i];
        saved2 = argv[i + 1];
        if (ft_strncmp(saved,saved2,ft_strlen(saved)) == 0)
        {
            printf("hello\n");
        }
    }
    return(0);
}