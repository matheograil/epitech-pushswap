/*
** EPITECH PROJECT, 2021
** OP.C
** File description:
** OP.C file.
*/

#include "../include/my.h"
#include "../include/prototypes.h"

list_t *pull_b(list_t *first_head, list_t *second_head, int nb)
{
    add_item(first_head, nb);
    delete_first_item(&second_head);
    return (second_head);
}

list_t *rotate_a(list_t *head, int nb)
{
    add_item(head, nb);
    delete_first_item(&head);
    return (head);
}
