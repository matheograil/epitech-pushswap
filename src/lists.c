/*
** EPITECH PROJECT, 2021
** LISTS.C
** File description:
** LISTS.C file.
*/

#include "../include/my.h"
#include "../include/prototypes.h"

void create_a_list(int ac, char **av, list_t *head_a)
{
    for (int i = 1; i < ac; i++) {
        add_item(head_a, my_atoi(av[i]));
    }
}

int create_b_list_return(char *res, int list_size)
{
    if (my_strlen(res) == list_size) {
        free(res);
        return (1);
    }
    print_result(res);
    free(res);
    return (0);
}

int create_b_list(list_t *head_a, list_t *head_b)
{
    int list_size = count_items(head_a);
    char *res = malloc(sizeof(char) * list_size * list_size);
    int i = 0;
    int *min;

    for (int first_nb; count_items(head_a) != 0; res[i++] = 'p') {
        min = get_min_item(head_a);
        if (min[0] == 1) {
            head_a = pull_b(head_b, head_a, min[1]);
            continue;
        }
        while ((first_nb = get_first_item(head_a)) != min[1]) {
            head_a = rotate_a(head_a, first_nb);
            res[i++] = 'r';
        }
        head_a = pull_b(head_b, head_a, min[1]);
    }
    res[i] = '\0';
    return (create_b_list_return(res, list_size));
}

void move_b_list(list_t *head_b)
{
    for (int i = 0, j = count_items(head_b); i != j; i++) {
        if (i == j - 1) {
            my_putstr("pa");
        } else {
            my_putstr("pa ");
        }
    }
}
