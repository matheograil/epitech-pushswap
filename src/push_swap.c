/*
** EPITECH PROJECT, 2021
** PUSH_SWAP.C
** File description:
** PUSH_SWAP.C file.
*/

#include "../include/my.h"
#include "../include/prototypes.h"

void process(int ac, char **av, list_t *head_a, list_t *head_b)
{
    create_a_list(ac, av, head_a);
    delete_first_item(&head_a);
    if (create_b_list(head_a, head_b) == 0) {
        delete_first_item(&head_b);
        move_b_list(head_b);
    }
    for (int i = 0, b_items_nb = count_items(head_b); i < b_items_nb; i++) {
        delete_first_item(&head_b);
    }
}

void malloc_lists(int ac, char **av)
{
    list_t *head_a = NULL;
    list_t *head_b = NULL;

    head_a = (list_t *) malloc(sizeof(list_t));
    head_b = (list_t *) malloc(sizeof(list_t));
    process(ac, av, head_a, head_b);
}

int main(int ac, char **av)
{
    if (ac == 1) {
        return (84);
    } else if (ac == 2) {
        my_putchar('\n');
        return (0);
    }
    malloc_lists(ac, av);
    my_putchar('\n');
    return (0);
}
