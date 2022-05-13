/*
** EPITECH PROJECT, 2021
** PROTOTYPES.H
** File description:
** PROTOTYPES.H file.
*/

#ifndef PROTOTYPES_H_

    #define PROTOTYPES_H_

typedef struct list_s {
    int nb;
    struct list_s *next;
} list_t;

int main(int, char **);
void malloc_lists(int, char **);
void process(int, char **, list_t *, list_t *);

void create_a_list(int, char **, list_t *);
int create_b_list(list_t *, list_t *);
int create_b_list_return(char *, int);
void move_b_list(list_t *);

int count_items(list_t *);
int *get_min_item(list_t *);
void add_item(list_t *, int);
void delete_first_item(list_t **);
int get_first_item(list_t *);

list_t *pull_b(list_t *, list_t *, int);
list_t *rotate_a(list_t *, int);

void print_result(char *);

#endif /* !PROTOTYPES_H_ */
