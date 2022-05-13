/*
** EPITECH PROJECT, 2021
** ITEMS.C
** File description:
** ITEMS.C file.
*/

#include "../include/my.h"
#include "../include/prototypes.h"

int count_items(list_t *head)
{
    list_t *current = head;
    int i = 0;

    while (current != NULL) {
        i++;
        current = current->next;
    }
    return (i);
}

int *get_min_item(list_t *head)
{
    list_t *current = head;
    int i = 0;
    int min;
    static int res[2];

    while (current != NULL) {
        if (i == 0) {
            min = current->nb;
        }
        if (current->nb < min) {
            min = current->nb;
        }
        i++;
        current = current->next;
    }
    res[0] = i;
    res[1] = min;
    return (res);
}

void add_item(list_t *head, int nb)
{
    list_t *current = head;

    while (current->next != NULL) {
        current = current->next;
    }
    current->next = (list_t *) malloc(sizeof(list_t));
    current->next->nb = nb;
    current->next->next = NULL;
}

void delete_first_item(list_t **head)
{
    list_t *next_node = NULL;

    next_node = (*head)->next;
    free(*head);
    *head = next_node;
}

int get_first_item(list_t *head)
{
    list_t *current = head;
    int res = current->nb;

    return (res);
}
